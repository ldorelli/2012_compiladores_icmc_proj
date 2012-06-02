%token IDENT 
%token OP_AT 
%token OP_DF 
%token OP_GE 
%token OP_LE 
%token OP_GR 
%token OP_LS 
%token OP_PL 
%token OP_MI 
%token OP_ML 
%token OP_DV 
%token OP_EQ 
%token SB_PV 
%token SB_PF 
%token SB_DP 
%token SB_VG 
%token SB_PO 
%token SB_PC 
%token ER_IDG 
%token ER_IFL 
%token ER_NMF 
%token ER_CIN 
%token ER_CNF
%token NRO_INTEIRO 
%token NRO_REAL
%token PROGRAM
%token BEG
%token END
%token CONST
%token VAR
%token REAL
%token INTEGER
%token CHAR
%token PROCEDURE
%token IF
%token ELSE	
%token READLN
%token WRITELN	
%token REPEAT
%token THEN
%token UNTIL
%token WHILE
%token FUNCTION	

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
		PROGRAM IDENT SB_PV corpo SB_PF { printf ("Fim da analise sintatica\n"); }
	|	error SB_PV { yyerrok; } corpo SB_PF { printf("Fim da analise sintatica.\n"); }
	;

corpo:
		dc BEG comandos END 
	;

dc:
		dc_c {printf ("Fim da declaracao de constantes\n");} 
		dc_v {printf ("Fim da declaracao de variaveis\n");} 
		dc_p {printf ("Fim da declaracao de procedimentos\n");} 
		{ printf ("Fim da declaracao\n"); }
	;

	//NAKAterminado
dc_c:
		CONST IDENT OP_AT numero SB_PV { printf ("%d: Reduziu constante\n", yylineno); } dc_c
	|	error SB_PV { yyerrok; } dc_c
	| 	
	;
	
	//NAKAterminado
dc_v:
		VAR variaveis SB_DP tipo_var SB_PV { printf ("%d: Reduziu variavel\n", yylineno); } dc_v
	|	error SB_PV { yyerrok; } dc_v
	|	
	;

dc_p:
		PROCEDURE IDENT parametros SB_PV corpo_p { printf ("%d: Reduziu procedimento\n", yylineno); } dc_p 
	|	error SB_PV { yyerrok; printf ("errodcp\n"); } dc_p
	|
	;

corpo_p:
		dc_loc BEG comandos END SB_PV
	|	dc_loc BEG comandos END { sprintf(errv, "syntax error, unexpected %s, expecting SB_PV", yytext); yyerror(errv); yyerrok; }
	|	error BEG { yyerrok; } comandos END { yyerrok; } SB_PV
	| error SB_PV { yyerrok; }
	|	{ sprintf(errv, "syntax error, unexpected %s, expecting BEG", yytext);  yyerror(errv); yyerrok; }
	;

parametros:
		SB_PO lista_par	SB_PC
	|	error SB_PC { yyerrok; }
	;

	//NAKAterminado
lista_par:
		variaveis SB_DP tipo_var mais_par
		//NAKApossivel erro no clearin
	|	error { yyclearin; printf ("%d: %s errolpar\n", yylineno, yytext); } mais_par { yyerrok; }
	|
	;

	//NAKAterminado
mais_par:
		SB_PV lista_par
	|	error SB_PV { yyerrok; } lista_par
	// yyless aqui serve para retornar o parenteses para a cadeia a ser analisada
	// para aceitar na regra parametros
	|	error SB_PC { yyerrok; yyless(0); }
	|
	;

dc_loc:
		dc_v
	;


	//NAKAterminado
numero:
		NRO_REAL
	|	NRO_INTEIRO
	;

	//NAKAterminado
tipo_var:
		INTEGER
	|	REAL
	|	CHAR
	;

	//NAKAterminado
variaveis:
		IDENT mais_var
	;

	//NAKAterminado
mais_var:
		SB_VG variaveis
	|
	;

comandos:
		cmd SB_PV comandos
	|	error SB_PV { yyerrok; } comandos
	|	error END { yyerrok; yyless(0); }
	;

cmd:
		READLN SB_PO variaveis SB_PC
	|	WRITELN SB_PO variaveis SB_PC
	|	IDENT OP_AT expressao
	;

expressao:
		termo outros_termos
	;

termo:
		op_un fator mais_fatores
	;

op_un:
		OP_PL
	|	OP_MI
	|
	;

fator:
		IDENT
	|	numero
	|	SB_PO expressao SB_PC
	;

mais_fatores:
		op_mul fator mais_fatores
	|
	;

op_mul:
		OP_ML
	|	OP_DV
	;

outros_termos:
		op_ad termo outros_termos
	|
	;

op_ad:
		OP_PL
	|	OP_MI
	;
%%

void yyerror(const char *s) {
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	/* Pega os tokens esperado e obtido */
	char esperado[50], obtido[50];
	int n;
	sscanf(s, "syntax error, unexpected %[^,], expecting%n", obtido, &n);
	printf("Erro na linha %d: unexpected %s [ %s ], expecting %s \n", yylineno, obtido, yytext, s+n+1);
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

