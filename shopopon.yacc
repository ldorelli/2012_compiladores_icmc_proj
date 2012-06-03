%token IDENT "identificador"
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
		//regra correta
		PROGRAM IDENT SB_PV corpo  { printf ("Fim da analise sintatica\n"); } SB_PF
		//erro no inicio do programa
	|	error SB_PV corpo SB_PF
		//falta de begin or so
	|	error SB_PF
	;

corpo:
		//regra correta
		dc BEG  { printf("Reduzindo \n"); } { printf("Reduziu corpo\n"); } END
	;

dc:
		//regra correta
		dc_c {printf ("Fim da declaracao de constantes\n");} 
		dc_v {printf ("Fim da declaracao de variaveis\n");} 
		dc_p {printf ("Fim da declaracao de procedimentos\n");} 
		{ printf ("Fim da declaracao\n"); }
	;

dc_c:
		//regra correta
		CONST IDENT OP_AT numero SB_PV { printf ("%d: Reduziu constante\n", yylineno); } dc_c
	/**
		//erros na declaracao de constantes
	|	CONST error SB_PV { yyerrok; printf ("%d: erro com ;\n", yylineno); } dc_c
	/**/
	/**/
		//erros nao tratatados da declaracao anterior
	|	error { printf ("%d: errc\n", yylineno); } err_c
	|	CONST error { printf ("%d: erro na vida c\n", yylineno); } dc_c
	/**/
	|
	;
	
dc_v:
		//regra correta
		VAR variaveis SB_DP tipo_var SB_PV { printf ("%d: Reduziu variavel\n", yylineno); } dc_v
	/**/
		//erros nao tratatados da declaracao anterior
	| error { printf ("%d: errv\n", yylineno); } err_v
	|	VAR error { printf ("%d: erro na vida v\n", yylineno); } dc_v
	/**/
	|	
	;

dc_p:
		//regra correta
		PROCEDURE { printf ("Proc\n"); } IDENT parametros SB_PV corpo_p { printf ("%d: Reduziu procedimento\n", yylineno); } dc_p
	|	error { printf ("%d: errp\n", yylineno); } err_p
	/**|	error dc_p/**/	
		//erros na declaracao de parametros
	|	PROCEDURE { printf ("Proc\n"); } error { printf ("%d: Erro na vida p\n", yylineno); } corpo_p dc_p
	
	|
	;

err_c:
		SB_PV { yyerrok; } dc_c
	|	CONST { yyerrok; yyless(0); } dc_c
	|	VAR { yyerrok; yyless(0); } dc_c
	|	PROCEDURE { yyerrok; yyless(0); } dc_c
	|	BEG { yyerrok; yyless(0); } dc_c
	;

err_v:
		SB_PV { yyerrok; } dc_v
	|	VAR { yyerrok; yyless(0); } dc_v
	|	PROCEDURE { yyerrok; yyless(0); } dc_v
	|	BEG { yyerrok; yyless(0); } dc_v
	;
	
err_p:
		SB_PV { yyerrok; } dc_p
	|	PROCEDURE { yyerrok; yyless(0); } dc_p
	|	BEG { yyerrok; yyless(0); } dc_p
	;

parametros:
		//regra correta
		SB_PO lista_par	SB_PC
	;

lista_par:
		//regra correta
		variaveis SB_DP tipo_var mais_par
	|
	;

mais_par:
		//regra correta
		SB_PV lista_par
	|
	;

corpo_p:
		//regra correta
		BEG END SB_PV
		//erro vindo da declaracao do procedimento
	|	error BEG END SB_PV
	;

variaveis:
		IDENT mais_var
	;

mais_var:
		SB_VG variaveis
	|
	;

numero:
		NRO_REAL
	|	NRO_INTEIRO
	;

tipo_var:
		INTEGER
	|	REAL
	|	CHAR
	;
%%

void yyerror(const char *s) {
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	/* Pega os tokens esperado e obtido */
	char esperado[50], obtido[50];
	int n = 0;
	sscanf(s, "syntax error, unexpected %[^,], expecting%n", obtido, &n);
	if(strcmp(obtido, "$end") == 0) {
		printf("Final inesperado de arquivo.\n");
	} else {
		if(n) {
			printf("Erro na linha %d: unexpected %s [ %s ], expecting %s \n", yylineno, obtido, yytext, s+n+1);
		} else printf("Erro na linha %d: %s inesperado.\n", yylineno, obtido);
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

