%token IDENT "identificador"
%token OP_AT ":="
%token OP_DF "<>"
%token OP_GE ">="
%token OP_LE "<="
%token OP_GR ">"
%token OP_LS "<"
%token OP_PL "+"
%token OP_MI "-"
%token OP_ML "*"
%token OP_DV "/"
%token OP_EQ "="
%token SB_PV ";"
%token SB_PF "."
%token SB_DP ":"
%token SB_VG
%token SB_PO "("
%token SB_PC ")"
%token ER_IDG "Identificador_muito_grande"
%token ER_IFL "Inteiro_fora_dos_limites"
%token ER_NMF "Numero_mal_formado"
%token ER_CIN "Caracter_nao_identificado"
%token ER_CNF "Comentario_nao_fechado"
%token NRO_INTEIRO "numero_inteiro"
%token NRO_REAL "numero_real"
%token PROGRAM "program"
%token BEG "begin"
%token END "end"
%token CONST "const"
%token VAR "var"
%token REAL "real"
%token INTEGER "integer"
%token CHAR "char"
%token PROCEDURE "procedure"
%token IF "if"
%token ELSE	"else"
%token READLN "readln"
%token WRITELN	"writeln"
%token REPEAT "repeat"
%token THEN "then"
%token UNTIL "until"
%token WHILE "while"
%token DO "do"
%token FUNCTION "function"	

%nonassoc IF
%nonassoc ELSE
%left OP_PL OP_MI
%left OP_ML OP_DV

%{ 
	#include "symbolTable.h"
	#define YYSTYPE  STable_Entry
	#include  "lex.yy.c"
	#include <string.h>
	#include "commands.h"

	/* Código */
	CodeLine code[5000000];
	int codeLine;
	int usedAddress;
	int procedureCount ;
	int generateCode;
	int mainLine;
	int desvLine;
	int scope0procedures;

	char errv[100]; 
	int yydebug = 1;
	extern int yylineno;
	
	SymbolTable tables[10]; // ate 10 escopo
	int variablesPerScope[10];
	int scope;
	
	FILE * file;	

	/* Tamanho realista */
	/* Vai guardar coisas como lista de parametros ou variaveis */
	STable_Entry parameterList[400];
	int paramQty;
	/* Numero de parametros da lista de parametros que ja tem tipo definido */
	int definedParams;
	int validProcedure;
%}
%{ void yyerror(const char*); %}

%error-verbose

%%

program: 
		/*regra correta*/
		PROGRAM IDENT SB_PV 
		{
			/* Adiciona o programa na tabela de simbolos */
			STable_Entry programEntry;
			programEntry.category = PROGRAM;
			strcpy(programEntry.name, $2.name);
			symbolTable_add(&tables[scope], programEntry);
		}
		corpo SB_PF
		/*erro no inicio do programa: identificador ou falta de ';'*/
	|	PROGRAM error corpo SB_PF { generateCode = 0; }
		/*erro ao escrever 'program'*/
	|	error SB_PV ok corpo SB_PF { generateCode = 0; }
	;

corpo:
		/*regra correta*/
		dc BEG 
		{
			/* Altera a linha do inicio do programa */
			mainLine = codeLine;
		} 
		comandos END ok
	;

dc:
		/*regra correta*/
		dc_c dc_v { desvLine = codeLine; } dc_p
	;

dc_c:
		/*regra correta*/
		CONST IDENT ok OP_AT numero SB_PV 
		{
			/* Adiciona constante na tabela de simbolos */
			STable_Entry constEntry;
			constEntry.category = CONST;
			constEntry.type = $5.type;
			constEntry.ival = $5.ival;
			constEntry.rval = $5.rval;
			constEntry.line = yylineno;
			strcpy(constEntry.name, $2.name);
			symbolTable_add(&tables[scope], constEntry);
		}
		dc_c
		
		/*erros nao tratatados da declaracao anterior: ex.:falta de ';'*/
	|	error err_c ok dc_c { generateCode = 0; }
		/*erros passados para a proxima declaracao*/
	|	CONST error dc_c { generateCode = 0; }
	|
	;
	
dc_v:
		/*regra correta*/
		VAR
		/* Zera a lista de parametros */
		{ paramQty = 0; definedParams = 0; } 
		variaveis ok SB_DP tipo_var SB_PV ok
		{
			int i;
			/* Navega pelas variaveis declaradas */
			for(i = 0; i < paramQty; i++)			
			{
				STable_Entry * entry = 
					symbolTable_find(&tables[scope], parameterList[i].name);
				if(entry) {
					if(entry->category == VAR) {
						/* Se ja existe a variavel */
						generateCode = 0;
						fprintf(stderr, "Erro na linha %d: redeclaracao da variavel %s.\n"
							"\tDefinicao previa na linha %d.\n", 
							yylineno,
							parameterList[i].name, entry->line);
					} else if(entry->category == PROCEDURE) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: %s previamente definido como procedimento.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, parameterList[i].name, entry->line );
					} else if(entry->category == CONST) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: %s previamente definido como constante.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, parameterList[i].name, entry->line );
					}
				} else {
					/* Se nao existe ainda */
					parameterList[i].type = $6.type;
					parameterList[i].category = VAR;
					parameterList[i].line = yylineno;
					/* 
					 	Aumenta 1 no espaco para variaveis globais 
						Codigo de alocacao 
					 */
					code[codeLine].opCode = ALME;
					code[codeLine].type = INTEGER;
					code[codeLine++].iArg = 1;
					parameterList[i].address = usedAddress++;
					variablesPerScope[scope]++;
					symbolTable_add(&tables[scope], parameterList[i]);
				}
			}
		} dc_v
		/*erros nao tratatados da declaracao anterio: ex.: falta de ';' */
	| error err_v ok dc_v { generateCode = 0; }
		/*erros passados para a proxima declaracao*/
	|	VAR error dc_v { generateCode = 0; }
	|
	;

dc_p:
		/*regra correta*/
		PROCEDURE

		/* Entrou em procedimento */
		IDENT  
		{ 

			if(scope == 0) {
				if(!scope0procedures)
				{
					desvLine = codeLine;
					code[codeLine].type = INTEGER;
					code[codeLine++].opCode = DSVI;
				}
				scope0procedures++;
			}
			/* Zera a quantidade de parametros - sera calculada pela regra parametros */
			paramQty = 0;
			definedParams = 0;
			STable_Entry procEntry;
			procEntry.category = PROCEDURE;
			procEntry.parameters = NULL;
			procEntry.address = codeLine;
			procEntry.paramQty = 0;
			/* Copia o identificador para o nome da entrada da tabela */
			strcpy(procEntry.name, $2.name);
			STable_Entry * entry;
			entry = symbolTable_find(&tables[scope], procEntry.name);
			validProcedure = 1;

			if(entry) {
				validProcedure = 0;
				if(entry->category == PROCEDURE) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Redefinicao do procedimento %s.\n"
							"\tDefinicao previa na linha %d\n", 
							yylineno, entry->name, entry->line
						);
				} else if(entry->category == VAR) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: %s previamente definido como variavel.\n"
							"\tDefinicao previa na linha %d.\n	", 
							yylineno, entry->name, entry->line
						);
				} else if(entry->category == PROGRAM) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: %s previamente definido como nome do programa.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, entry->name, entry->line );
				}
			} else {
				procedureCount++;
				symbolTable_add(&tables[scope], procEntry);
			}
		}
		ok 
		parametros 
		{
			/* Endereço de retorno */
			usedAddress++;
			/* Inicia a tabela para o novo escopo */
			symbolTable_init(&tables[scope+1], 0);
			int i;
			/* Adiciona os parametros na tabela de simbolos do escopo global -
				que contem todos os procedimentos */
			if(validProcedure) {
				for(i = 0; i < paramQty; i++) { 
					int x = symbolTable_addParameter(&tables[0], $2.name, parameterList[i]);
					if(x < 0) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Parametro %s redefinido. \n" 
								"\tPreviamente definido como parametro %d.\n", 
							yylineno, parameterList[i].name, 
							- x - 1);
					} 

					/* Adiciona a variavel no escopo novo */
					parameterList[i].address = usedAddress++;
					
					code[codeLine].opCode = COPVL; 
					code[codeLine++].type = NOARG;
					symbolTable_add(&tables[scope+1], parameterList[i]);
				}
			}
			
			/* Aumenta um escopo - para as variaveis locais */
			scope++;
		}
		SB_PV

		corpo_p ok 
		{
			STable_Entry * entry = symbolTable_find(&tables[0], $2.name);

			/* Saiu do procedimento */
			if(entry) {

				/* Desaloca memoria */
				code[codeLine].opCode = DESM;
				code[codeLine].type = INTEGER;
				code[codeLine++].iArg = variablesPerScope[scope] + entry->paramQty;	
				usedAddress += -entry->paramQty - variablesPerScope[scope] - 1;
			}
			code[codeLine].type = NOARG;
			code[codeLine++].opCode = RTPR;
			symbolTable_erase(&tables[scope], &tables[scope]);
			variablesPerScope[scope] = 0;

			
			scope--;

		} dc_p

		/*erros na declaracao de parametros*/
	| PROCEDURE error corpo_p ok dc_p { generateCode = 0; }
		/*erros nao tratados na declaracao anterior*/
	|	error err_p ok dc_p { generateCode = 0; }
	|
	;

/*simbolos de sincronizacao para erros na declaracao de constante*/
err_c:
		SB_PV
	|	CONST less
	|	VAR less
	|	PROCEDURE less
	|	BEG less
	;

/*simbolos de sincronizacao para erros na declaracao de variavel*/
err_v:
		SB_PV
	|	VAR less
	|	PROCEDURE less 
	|	BEG less
	;

/*simbolos de sincronizacao para erros na declaracao de procedimento*/
err_p:
		SB_PV
	|	PROCEDURE less
	|	BEG less
	|	END
	;

parametros:
		/*regra correta*/
		SB_PO lista_par	SB_PC
		/*erro na lista de parametros*/
	|	SB_PO error SB_PC { generateCode = 0; }
	|
	;

lista_par:
		/*regra correta*/
		variaveis
		SB_DP 
		tipo_var
		{
			int i;
			/* Altera o tipo dos parametros até agora */
			for(i = definedParams; i < paramQty; i++) 
				parameterList[i].type = $3.type;
			definedParams = paramQty;
		} 
		mais_par
		/*erro vindo de "mais_par"*/
	| error variaveis SB_DP tipo_var ok mais_par { generateCode = 0; }
		/*erro em um dos parametros*/
	|	error mais_par ok { generateCode = 0; }
		/*passa o erro para a regra "parametros"*/
	|	error { generateCode = 0; }
	;

mais_par:
		/*regra correta*/
		SB_PV lista_par
		/*erro vindo de "lista_par", sinconiza no ';'*/
	|	error SB_PV ok lista_par { generateCode = 0; }
		/*erro vindo de "lista_par" sem ';'*/
	| error lista_par { generateCode = 0; }
		/*passa o erro para a regra "lista_par"*/
	|	error { generateCode = 0; }
	|
	;

corpo_p:
		/*regra correta*/
		dc_v BEG ok comandos END SB_PV
		/*tratamento especial para 'end' sem ';'*/
	|	dc_v BEG ok comandos END { 
			generateCode = 0; 
			sprintf(errv, "syntax error, unexpected %s, expecting ;", yytext); yyerror (errv); yyerrok; }
		/*passa erro no corpo para o err_cp*/
	|	dc_v error { generateCode = 0; }
		/*erro vindo da declaracao do procedimento*/
	|	error corpo_p { generateCode = 0; }
	;
	
comandos:
		/*regra correta*/
		cmd SB_PV ok comandos
		/*erro em um comando anterior*/
	|	error comandos { generateCode = 0; }
	|
	;

/*comandos corretos e sincronizacao*/
cmd:
		READLN ok SB_PO 
		{ 
			/* Prepara os parametros */
			paramQty = 0;
			definedParams = 0;
		}
		variaveis 
		{
			int type = -1;
			int badTypes = 0, i, cscope;
			STable_Entry * entry = 0;
			

			for(i = 0; i < paramQty; i++) {
				int found = 0;
				entry = 0;
				/* Procura para ver se a variavel sendo impressa existe */
				for(cscope = scope; !entry && cscope >= 0; cscope--) {
					entry = symbolTable_find(&tables[cscope], parameterList[i].name);
				}
				/* Variavel usada no readln nao existe */
				if(!entry) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Variavel %s usada e nao declarada.\n",
						 yylineno, parameterList[i].name);
				} else {
					/* Se as variaveis sao identificadores de programa ou procedure */
					if(entry->category == CONST) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Constante %s usada em leitura.\n", yylineno, entry->name);
					} else if(entry->category == PROCEDURE) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Procedimento %s usada em leitura.\n", yylineno, entry->name);
					} else if(entry->category == PROGRAM) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Nome do programa usada em leitura.\n", yylineno);
					} else if(type == -1) type = entry->type;
					else if(entry->type != type) badTypes = 1, generateCode = 0; ;
					
					/* Geração de código */
					code[codeLine].type = NOARG;
					code[codeLine++].opCode = LEIT;
					code[codeLine].type = INTEGER;
					code[codeLine].opCode = ARMZ;
					code[codeLine++].iArg = entry->address;
				}
			}
			if(badTypes) 
			{
				generateCode = 0; 
				/* Tipos diferentes (se nao houve algum erro anterior) */
				fprintf(stderr,
					"Erro na linha %d: tipos diferentes no comando readln.\n", 
					yylineno);
			} 
		}
		SB_PC ok 


	|	
		WRITELN 
		{
			paramQty = 0;
			definedParams = 0;
		}
		ok 
		SB_PO 
		variaveis 
		{
			int type = -1;
			int badTypes = 0, i, cscope;
			STable_Entry * entry = 0;

			for(i = 0; i < paramQty; i++) {
				int found = 0;
				entry = 0;
				/* Procura para ver se a variavel sendo impressa existe */
				for(cscope = scope; !entry && cscope >= 0; cscope--) {
					entry = symbolTable_find(&tables[cscope], parameterList[i].name);
				}
				/* Variavel usada no readln nao existe */
				if(!entry) {
					generateCode = 0; 
					fprintf(stderr,
						"Erro na linha %d: Variavel %s usada e nao declarada.\n", yylineno, 
						parameterList[i].name);
				} else {
					/* Se as variaveis sao identificadores de programa ou procedure */
					if(entry->category == PROCEDURE) {
						generateCode = 0; 
						fprintf(stderr, 
							"Erro na linha %d: Procedimento %s usada em escrita.\n", yylineno, entry->name);
					} else if(entry->category == PROGRAM) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Nome do programa usada em escrita.\n", yylineno);
					} else if(type == -1) type = entry->type;
					else if(entry->type != type) badTypes = 1, generateCode = 0; 
					
					/* Geração de código */
					code[codeLine].opCode = CRVL;
					code[codeLine].type = INTEGER;
					code[codeLine++].iArg = entry->address;
					code[codeLine].type = NOARG;
					code[codeLine++].opCode = IMPR;
				} 
			}
			if(badTypes) 
			{
				generateCode = 0; 
				/* Tipos diferentes (se nao houve algum erro anterior) */
				fprintf(stderr, "Erro na linha %d: tipos diferentes no comando writeln.\n", 
					yylineno);
			}
		}
		SB_PC ok

		/* begin end */
	|	BEG ok comandos END ok
	
	|	/* ident := expr */
		IDENT ok OP_AT expressao
		{
			STable_Entry * entry = 0;

			/* Procura em todos os escopos aceitaveis */
			int cscope;
			for(cscope = scope; !entry && cscope >= 0; cscope--) 
			 	entry = symbolTable_find(&tables[cscope], $1.name);

			 if(!entry) 
			 {
			 	generateCode = 0; 
			 	/* Variavel nao declarada */
			 	fprintf(stderr, "Erro na linha %d: Variavel %s nao declarada.\n", 
			 		yylineno, $1.name);
			 } else {
			 	/* Erro de atribuicao */
			 	if(entry->category == CONST) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Atribuindo uma expressao a constante.\n", 
			 			yylineno);
			 	} else if(entry->category == PROCEDURE) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Atribuindo uma expressao a procedimento.\n", 
			 			yylineno);
			 	} else if(entry->category == PROGRAM) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Nome do programa utilizado em expressao.\n", 
			 			yylineno);
			 	} else if (entry->type == INTEGER && $4.type == REAL) {
			 		generateCode = 0; 
			 		fprintf (stderr, "%s: %d\n", $4.name, $4.type);
			 		fprintf(stderr, "Erro na linha %d: Atribuicao de real a inteiro.\n", 
			 			yylineno, $1.name);
			 	} 

			 	/* Geração de código */
			 	code[codeLine].opCode = ARMZ;
			 	code[codeLine].type = INTEGER;
			 	code[codeLine++].iArg = entry->address;
			 }
		}

	|	
		REPEAT
		{
			/* Endereco de retorno de Loop */
			$1.codeLine = codeLine;
		}
		ok comandos UNTIL
		ok condicao 
		{
			code[codeLine].opCode = DSVF;
			code[codeLine].type = INTEGER;
			/* Pula para a linha duas abaixo! A proxima eh um jump incondicional voltando */
			code[codeLine].iArg = codeLine + 2; 
			codeLine++;
			code[codeLine].opCode = DSVI;
			code[codeLine].type = INTEGER;
			code[codeLine++].iArg = $1.codeLine;
		}
	
	|
		/* Chamada de procedimento */
		IDENT 
		{ 
			/* Busca o procedimento */
			STable_Entry * entry = symbolTable_find(&tables[0], $1.name);
			if(!entry) {
				generateCode = 0; 
				fprintf(stderr, "Erro na linha %d: Procedimento %s nao declarado.\n", 
					yylineno, $1.name);
			} 
			paramQty = 0; 
			definedParams = 0;
		}
		ok 
		lista_arg 
		{
			/* Busca o procedimento */
			STable_Entry * entry = symbolTable_find(&tables[0], $1.name);

			if(entry) {
				/* Se o procedimento existe, confira os parametros */
				ParameterNode * node; 
				/* Numero de parametros do procedimento */
				int qty = entry->paramQty;
				node = entry->parameters;

				if(qty < paramQty) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Excesso de parametros na chamada"
						" do procedimento %s. %d parametro%c esperado%c, %d parametro%c obtido%c. \n",
						yylineno, entry->name, qty, (qty==1)?'\0':'s', (qty==1)?'\0':'s',
						paramQty, (paramQty==1)?'\0':'s', (paramQty==1)?'\0':'s');
				} else if(qty > paramQty) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Falta de parametros na chamada"
						" do procedimento %s. %d parametro%c esperado%c, %d parametro%c obtido%c. \n",
						yylineno, entry->name, qty, (qty==1)?'\0':'s', (qty==1)?'\0':'s',
						paramQty, (paramQty==1)?'\0':'s', (paramQty==1)?'\0':'s');
				} 
				
				int i;
				int checkCount = (paramQty<qty)?paramQty:qty;
				int pushLine = codeLine;
				/* End. de retorno */
				code[codeLine].opCode = PUSHER;
				code[codeLine].type = NOARG; 
				codeLine++;

				for(i = 0; i < checkCount ; i++) {

					if(parameterList[i].type != node->value.type) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: Parametro %d do procedimento %s:\n\t"
							"%s obtido, %s esperado. \n",
							yylineno, i+1, entry->name,
							(parameterList[i].type==REAL)?"Real":"Inteiro",
							(node->value.type==REAL)?"Real":"Inteiro" );
					}	else {
						/* Gera o codigo */
						code[codeLine].type = INTEGER;
						code[codeLine].iArg = parameterList[i].address;
						code[codeLine++].opCode = PARAM;
 						node = node->next;
					}
				}
				/* Chamada de procedimento */
				code[codeLine].opCode = CHPR;
				code[codeLine].type = INTEGER;
				code[codeLine++].iArg = entry->address;
				code[pushLine].iArg = codeLine;
 			} 
		}
		ok

	|	
		IF 

		ok condicao 
		{

			/* 
				Linha do desvio 
				COND
				DSVF ELSE
				CODIF
				DESVI DPS
				ELSE
				COD
				DPS 
			*/
			$1.codeLine = codeLine;
			code[codeLine].opCode = DSVF;
			code[codeLine].type = INTEGER;
			codeLine++;
		}
		THEN ok cmd 
		
		pfalsa
		{
			/* Jump do IF - vai para o ELSE */
			code[$1.codeLine].iArg = $8.codeLine;
			
		}

	|	
		WHILE 
		{
			/* Linha do inicio do while */
			$1.codeLine = codeLine;
		}
		ok 
		condicao 
		{
			/* Linha do pulo do while */
			$2.codeLine = codeLine;
			code[codeLine].opCode = DSVF;
			code[codeLine++].type = INTEGER; 
		}
		DO
		ok
		cmd
		{
			/* Desvia incondicionalmente para o inicio do while */
			code[$2.codeLine].iArg = codeLine + 1;
			code[codeLine].opCode = DSVI;
			code[codeLine].type = INTEGER;
			code[codeLine++].iArg = $1.codeLine;
		}
	;

pfalsa:
		/*sincronizacao no else*/
		ELSE ok
		{

			$1.codeLine = codeLine;
			/* Logo no inicio do else, desvia para o final (para o IF pular) */
			code[codeLine].opCode = DSVI;
			code[codeLine].type = NOARG;
			codeLine++;
		}
		cmd
		{
			/* Final do Else - Preenche o pulo para o IF */
			code[$1.codeLine].iArg = codeLine;
			$$.codeLine = $1.codeLine + 1;
		}
		
	|   {  
			/* Pulo para o if */
			$$.codeLine = codeLine; 
		}
	;

lista_arg:
		/*regra correta*/
		SB_PO argumentos SB_PC
		/*erro em argumentos*/
	| SB_PO error SB_PC { generateCode = 0; }
	|
	;
	
argumentos:
		/*regra correta*/
		IDENT 
		{
			STable_Entry * entry = 0;
			int cscope;
			for(cscope = scope; !entry && cscope >= 0; cscope--) {
				entry = symbolTable_find(&tables[cscope], $1.name);
			}
			if(!entry) {
				generateCode = 0; 
				fprintf(stderr, "Erro na linha %d: Parametro %s nao declarado.\n",
					yylineno, $1.name);
				/* Adiciona na lista de parametros */
				parameterList[paramQty++] = $1; 
			} else parameterList[paramQty++] =  *entry;

		}
		ok mais_ident ok
		/*passa o erro para a regra "lista_arg"*/
	|	error { generateCode = 0; }
	;

mais_ident:
		/*regra correta*/
		SB_PV ok argumentos ok
		/*erro em argumentos anteriores*/
	|	error argumentos ok { generateCode = 0; }
		/*passa o erro para a regra argumentos*/
	|	error { generateCode = 0; }
	|
	;

condicao:
		/*regra correta*/
		expressao relacao expressao
		{
			if($2.category == OP_EQ) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPIG;
			} else if($2.category == OP_DF) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CDES;
			} else if($2.category == OP_GR) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPMA;
			} else if($2.category == OP_LS) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPME;
			} else if($2.category == OP_GE) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPMI;
			} else if($2.category == OP_LE) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPMI;
			}
		}
		/*erro no lado direito da condicao*/
	|	expressao error { generateCode = 0; }
	;

/*regras corretas*/
relacao: 
		OP_EQ
	|	OP_DF
	|	OP_GE
	|	OP_LE
	|	OP_GR
	|	OP_LS
	;

/*regra corretas*/
expressao:
		termo outros_termos 
		{
			if($1.type == REAL || $2.type == REAL) $$.type = REAL;
			else if($1.type == ERROR || $2.type == ERROR) $$.type = ERROR;
			else $$.type = INTEGER;
		}
	;

/*regra correta*/
termo:
		op_un fator 
		{
			if($1.category == OP_MI) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = INVE;
			}
		}
		mais_fatores  
		{

			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if($2.type == REAL || $3.type == REAL) $$.type = REAL;
			else if($2.type == ERROR || $3.type == ERROR) $$.type = ERROR;
			else $$.type = INTEGER;
		}
	;


/*regras corretas*/
fator:
		numero 
		{ 
			/* Geração de código */
			code[codeLine].opCode = CRCT;
			/* Checa o tipo do numero, para usar o campo correto */
			if($1.type == REAL) {
				code[codeLine].type = REAL;
				code[codeLine++].rArg = $1.rval;
			} else  {
				code[codeLine].type = INTEGER;
				code[codeLine++].iArg = $1.ival;
			}

			$$.type = $1.type; 
		}
	| 	
		SB_PO expressao SB_PC
		{ 
			$$.type = $2.type; 
		}
		/*Note que lista_arg pode ser vazia, gerando IDENT*/
	|	IDENT 
		{
			/* Busca o identificador na tabela de simbolos */
			STable_Entry * entry = 0;
			int cscope;
			for(cscope = scope; !entry && cscope >= 0; cscope--)
				entry = symbolTable_find(&tables[cscope], $1.name);
			
			if(!entry) {
				generateCode = 0; 
				/* Se o identificador nao existe */
				fprintf(stderr, "Erro na linha %d: Identificador %s nao declarado.\n", 
					yylineno, $1.name);
				$$.type = ERROR;
			} else {
				if(entry->category == VAR || entry->category == CONST)
				{

					if(entry->category == VAR) {
						/* Geracao de codigo se for variavel */
						code[codeLine].opCode = CRVL;
						code[codeLine].type = INTEGER;
						code[codeLine++].iArg = entry->address;
					} else {
						/* Geracao de codigo para constante */
						code[codeLine].opCode = CRCT;
						if(entry->type == REAL) {
							code[codeLine].type = REAL;
							code[codeLine++].rArg = entry->rval;
						} else {
							code[codeLine].type = INTEGER;
							code[codeLine++].iArg = entry->ival;
						}
 					}


					strcpy($$.name, entry->name);
					$$.type = $1.type;
				} else if(entry->category == PROCEDURE) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Nome de procedimento usado em artimetica.\n", 
						yylineno);
					$$.type = ERROR;
				} else if(entry->category == PROGRAM) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Nome do programa usado em artimetica.\n", 
						yylineno);
					$$.type = ERROR;
				}
				
			}
		}

	;

/*regras corretas*/
mais_fatores:
		op_mul fator 
		{
			if($1.category == OP_ML) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = MULT;
			} else {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = DIVI;
			}

		}
		mais_fatores
		{
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if($1.category == OP_DV) {
				if($2.type != INTEGER || $3.type != INTEGER) 
				{
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Divisao de numeros nao inteiros.\n", 
						yylineno);
				}
			}

			if($2.type == REAL || $3.type == REAL) $$.type = REAL;
			else if($2.type == ERROR || $3.type == ERROR) $$.type = ERROR;
			else $$.type = INTEGER;
		}
	| 	{ $$.type = INTEGER; }
	;
	
/*regras corretas*/
outros_termos:
		op_ad termo 
		{
			if($1.category == OP_PL) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = SOMA;
			} else {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = SUBT;
			}
		} 
		outros_termos
		{
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if($2.type == REAL || $3.type == REAL) $$.type = REAL;
			else if($2.type == ERROR || $3.type == ERROR) $$.type = ERROR;
			else $$.type = INTEGER;
		}
	
	|	{ $$.type = INTEGER; }	

	;

/*regras corretas e sincronizacao apos identificador*/
variaveis:
		IDENT { 
			/* Adiciona a lista de parametros */
			$1.category = VAR;
			parameterList[paramQty++] = $1; 
		} 
		ok mais_var
	;

/*regras corretas*/
mais_var:
		SB_VG variaveis
	|
	;

/*regras corretas*/
op_un:
		OP_PL 
	|	OP_MI
	|
	;

/*regras corretas*/
op_ad:
		OP_PL
	|	OP_MI
	;

/*regras corretas*/
op_mul:
		OP_ML
	|	OP_DV
	;

/*regras corretas*/
numero:
		NRO_REAL 
		{ $$.type = REAL; }
	
	|	
		NRO_INTEIRO 
		{ $$.type = INTEGER; }
	;

/*regras corretas*/
tipo_var:
		INTEGER 
		{ $$.type = INTEGER; }
	
	|	REAL 
		{ $$.type = REAL; }

	|	CHAR 
		{ $$.type = CHAR; }
	;

/*regra para abreviar o comando*/
ok:
		{ yyerrok; }
	;

/*regra para abreviar o comando*/
less:
		{ yyless(0); }
	;
%%


void yyerror(const char *s) {

	generateCode = 0; 
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	char esperado[50], obtido[50], *pos;
	int n = 0, len;
	/* Pega os tokens esperado e obtido */
	sscanf(s, "syntax error, unexpected %[^,], expecting%s%n", obtido, esperado, &n);
	if(strcmp(obtido, "$end") == 0) { /*Fim de arquivo eh representado por $end*/
		fprintf(stderr, "Final inesperado de arquivo.\n");
	} else {
		if(n) {
			if (!strcmp (obtido, "Comentario_nao_fechado")) {
				
				fprintf (stderr, "Erro na linha %d: '%s'\n", yylineno, obtido);
			} else {
				if (!strcmp (obtido, "SB_VG"))	strcpy (obtido, ",");
				/*Mostra a linha do erro e o simbolo obtido*/
				fprintf(stderr, "Erro na linha %d: '%s' inesperado", yylineno, obtido);
				/*Mostra a cadeia caso seja um erro lexico ou um identificador*/
				if (!strcmp (obtido, "identificador")
					|| obtido[0] >= 'A' && obtido[0] <= 'Z')	fprintf (stderr, " [%s]", yytext);
				/*Renomeia '$end' para 'Fim_de_arquivo'*/
				if (!strcmp (esperado, "$end"))	strcpy (esperado, "Fim_de_arquivo");
				/*Mostra o(s) simbolo(s) esperado(s)*/
				fprintf (stderr, ", esperava '%s'",esperado);
				pos = (char*)s+n;
				len = strlen (s);
				/*Mostra todos, caso haja mais de um*/
				while (pos < s+len) {
					sscanf (pos, " or %s%n", esperado, &n);
					pos += n;
					fprintf (stderr, " ou '%s'", esperado);
				}
				fprintf (stderr, "\n");
			}
		} else
				/*Se nao estava esperando nenhum simbolo*/
				fprintf(stderr, "Erro na linha %d: '%s' inesperado.\n", yylineno, obtido);
	}
}

int main(int argc, char **argv )
{
	scope = 0;
	codeLine = 0;
	usedAddress = 0;
	generateCode = 1;
	scope0procedures = 0;

	int i;

	for(i = 0; i < 10; i++) {
		variablesPerScope[i] = 0;
	 	symbolTable_init(&tables[i], NULL);
	}

	/*Inicializa a trie*/
	initializeTrie(&pr);
	/*Insere as palavras reservadas na trie*/
	insert(&pr, "program", "program", PROGRAM);
	insert(&pr, "begin", "begin", BEG);
	insert(&pr, "end", "end", END);
	insert(&pr, "const", "const", CONST);
	insert(&pr, "var", "var", VAR);
	insert(&pr, "real", "real", REAL);
	insert(&pr, "integer", "integer", INTEGER);
	insert(&pr, "char", "char", CHAR);
	insert(&pr, "procedure", "procedure", PROCEDURE);
	insert(&pr, "if", "if", IF);
	insert(&pr, "else", "else", ELSE);
	insert(&pr, "readln", "readln", READLN);
	insert(&pr, "writeln", "writeln", WRITELN);
	insert(&pr, "repeat", "repeat", REPEAT);
	insert(&pr, "then", "then", THEN);
	insert(&pr, "until", "until", UNTIL);
	insert(&pr, "while", "while", WHILE);
	insert(&pr, "do", "do", DO);
	insert(&pr, "function", "function", FUNCTION);
	
	++argv, --argc;  /*Ignora o nome do programa*/
	/*Se for dado um arquivo como entrada, le do arquivo*/
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	/*Caso contrario, le da entrada padrao*/
	else
		yyin = stdin;

	if(argc >= 2) {
		file = fopen(argv[1], "w");
	} else {
		/* Y U NO NAME UR PROGRAM ): */
		file = fopen("youGiveMe.noName", "w");
	}


	code[codeLine].type = NOARG;
	code[codeLine++].opCode = INPP;
	
	desvLine = -1;

	/*Processa*/
	yyparse();

	code[desvLine].iArg = mainLine;
	code[codeLine].type = NOARG;
	code[codeLine++].opCode = PARA;
	
	if(generateCode) {
		fprintf(stderr, "Codigo compilado com sucesso.\n");
		flushCode(file, code, &codeLine);
	} else {
		if(argc >= 2)
			remove(argv[1]);
		else remove("youGiveMe.noName");
	}

	fclose(file);
	return 0;
}

