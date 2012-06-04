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
%token SB_VG ","
%token SB_PO "("
%token SB_PC ")"
%token ER_IDG "Identificador_muito_grande"
%token ER_IFL "Inteiro_fora_dos_limites"
%token ER_NMF "Numero_mal_formado"
%token ER_CIN "Caracter_nao_identificado"
%token ER_CNF "Comentario_nao_fechado"
%token NRO_INTEIRO "Numero_inteiro"
%token NRO_REAL "Numero_real"
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
	#include  "lex.yy.c"
	#include <string.h>

	char errv[100]; 
	int yydebug = 1;
	extern int yylineno;
%}
%{ void yyerror(const char*); %}

%error-verbose

%%

program: 
		//regra correta
		PROGRAM IDENT SB_PV corpo SB_PF
		//erro no inicio do programa
	|	PROGRAM error corpo SB_PF
	|	error SB_PV ok corpo SB_PF
	;

corpo:
		//regra correta
		dc BEG comandos END ok
	;

dc:
		//regra correta
		dc_c dc_v dc_p
	;

dc_c:
		//regra correta
		CONST IDENT ok OP_AT numero SB_PV dc_c
		//erros nao tratatados da declaracao anterior
	|	error err_c ok dc_c
		//erros passados para a proxima declaracao
	|	CONST error dc_c
	|
	;
	
dc_v:
		//regra correta
		VAR variaveis ok SB_DP tipo_var SB_PV ok dc_v
		//erros nao tratatados da declaracao anterior
	| error err_v ok dc_v
		//erros passados para a proxima declaracao
	|	VAR error dc_v
	|	
	;

dc_p:
		//regra correta
		PROCEDURE IDENT ok parametros SB_PV corpo_p ok dc_p
	/**/
		//erros na declaracao de parametros
	|	PROCEDURE error corpo_p ok dc_p/**/
		//erros nao tratados na declaracao anterior
	|	error err_p ok dc_p
	|
	;

//simbolos seguros para erros na declaracao de constante
err_c:
		SB_PV
	|	CONST less
	|	VAR less
	|	PROCEDURE less
	|	BEG less
	;

//simbolos seguros para erros na declaracao de variavel
err_v:
		SB_PV
	|	VAR less
	|	PROCEDURE less 
	|	BEG less
	;

//simbolos seguros para erros na declaracao de procedimento	
err_p:
		SB_PV
	|	PROCEDURE less
	|	BEG less corpo_p
	|	END
	;

parametros:
		//regra correta
		SB_PO lista_par	SB_PC
	|
	;

lista_par:
		//regra correta
		variaveis SB_DP tipo_var mais_par
	| error variaveis SB_DP tipo_var ok mais_par
	|	error mais_par ok
	;

mais_par:
		//regra correta
		SB_PV lista_par
		//erro vindo de lista_par
	|	error SB_PV ok lista_par
	| error lista_par
	|
	;

corpo_p:
		//regra correta
		dc_v BEG ok comandos END SB_PV
		//regra sem ponto e virgula
	|	dc_v BEG ok comandos END { sprintf(errv, "syntax error, unexpected %s, expecting ;", yytext); yyerror (errv); } ok
		//passa erro no corpo para o err_cp
	|	dc_v error
		//erro vindo da declaracao do procedimento
	|	error corpo_p
	;
	
comandos:
		cmd SB_PV ok comandos
	|	error comandos
	|
	;

cmd:
		READLN ok SB_PO variaveis SB_PC ok 
	|	WRITELN ok SB_PO variaveis SB_PC ok
	|	BEG ok comandos END ok
	|	IDENT ok OP_AT expressao
	|	REPEAT ok comandos UNTIL ok condicao
	|	IDENT ok lista_arg ok
	|	IF ok condicao THEN ok cmd pfalsa
	|	WHILE ok condicao DO ok cmd
	;

pfalsa:
		ELSE ok cmd
	|
	;

lista_arg:
		SB_PO argumentos SB_PC
	|
	;
	
argumentos:
		IDENT ok mais_ident ok
	;

mais_ident:
		SB_PV ok argumentos ok
	|	error argumentos ok
	|
	;

condicao:
		expressao relacao expressao
	|	expressao error
	;
	
relacao:
		OP_EQ
	|	OP_DF
	|	OP_GE
	|	OP_LE
	|	OP_GR
	|	OP_LS
	;

expressao:
		termo outros_termos
	;

termo:
		op_un fator mais_fatores
	;



fator:
		numero
	| SB_PO expressao SB_PC
		//Note que lista_arg pode ser vazia
	|	IDENT lista_arg
	;

mais_fatores:
		op_mul fator mais_fatores
	|
	;
	
outros_termos:
		op_ad termo outros_termos
	|
	;

variaveis:
		IDENT ok mais_var
	;

mais_var:
		SB_VG variaveis
	|
	;

op_un:
		OP_PL
	|	OP_MI
	|
	;

op_ad:
		OP_PL
	|	OP_MI
	;

op_mul:
		OP_ML
	|	OP_DV
	;

numero:
		NRO_REAL
	|	NRO_INTEIRO
	;

tipo_var:
		INTEGER
	|	REAL
	|	CHAR
	| error clear
	;
	
ok:
		{ yyerrok; }
	;
	
clear:
		{ yyclearin; }
	;
	
less:
		{ yyless(0); }
	;
%%

void yyerror(const char *s) {
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	/* Pega os tokens esperado e obtido */
	char esperado[50], obtido[50], *pos;
	int n = 0;
	sscanf(s, "syntax error, unexpected %[^,], expecting%s%n", obtido, esperado, &n);
	if(strcmp(obtido, "$end") == 0) {
		printf("Final inesperado de arquivo.\n");
	} else {
		if(n) {
			printf("Erro na linha %d: '%s' inesperado", yylineno, obtido);
			if (!strcmp (obtido, "identificador"))	printf (" [%s]", yytext);
			printf (", esperava '%s'",esperado);
			pos = (char*)s+n;
			while (*pos != '\0') {
				sscanf (pos, " or %s%n", esperado, &n);
				pos += n;
				printf (" ou '%s'", esperado);
			}
			printf ("\n");

		} else printf("Erro na linha %d: '%s' inesperado.\n", yylineno, obtido);
	}
}

int main(int argc, char **argv )
{
	initializeTrie(&pr);

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
	
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
	    yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	char next_text[1000];
	char next_token[1000];

	 /*yylex();*/
//	while(get_token(next_token, next_text)) {
//			/* Pega um indice que aponta para o vetor de tokens */
//	 		printf("%s %s \n", next_text, next_token);
//	}
	return yyparse();

	return 0;
}

