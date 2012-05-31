%token NRO_REAL
%token NRO_INTEIRO 
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

	char * errv; 
	int yydebug = 1;
	extern int yylineno;
%}
%{ void yyerror(const char*); %}

%error-verbose

%%

program: 
		PROGRAM IDENT SB_PV corpo SB_PF { printf("Fim da analise sintatica.\n"); }
	|	error SB_PV { yyerrok; yyclearin; } corpo SB_PF { printf("Fim da analise sintatica.\n"); }
	;

corpo:
		dc BEG END 
	;

dc:
		dc_c dc_v dc_p
	;
 
dc_c:
		CONST IDENT OP_AT numero SB_PV dc_c { printf("%d: Reduziu constante\n", yylineno); }
	|	error SB_PV { yyerrok; yyclearin; } dc_c
	| 	
	;

dc_v:
		VAR variaveis SB_DP tipo_var SB_PV dc_v { printf("%d: Reduziu variaveis\n", yylineno); }
	|	error SB_PV { yyerrok;  } dc_v
	|	
	;

dc_p:
		PROCEDURE IDENT parametros SB_PV { printf ("%d: Reduziu procedimento\n", yylineno); } dc_p 
	|	error SB_PV { yyerrok;  } dc_p  
	|
	;

parametros:
		SB_PO lista_par	SB_PC { printf ("%d: Reduziu parametros\n", yylineno); }
	|	error SB_PC { yyerrok; }
	;

lista_par:
		variaveis SB_DP tipo_var mais_par { printf ("%d: Reduziu lista\n", yylineno); }
	|	error mais_par { yyerrok; yyclearin; }
	|
	;

mais_par:
		SB_PV { yyerrok; } lista_par { printf("%d: Reduziu mais parametros\n", yylineno); }
	|
	;


numero:
		NRO_REAL
	|	NRO_INTEIRO
	;

tipo_var:
		INTEGER
	|	REAL
	;

variaveis:
		IDENT mais_var
	;

mais_var:
		SB_VG variaveis
	|
	;

%%

void yyerror(const char *s) {
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	/* Pega os tokens esperado e obtido */
	char esperado[50], obtido[50];
	sscanf(s, "syntax error, unexpected %[^,], expecting %s", obtido, esperado);
	printf("Erro na linha %d: unexpected %s, expecting %s (%s) \n", yylineno, obtido, esperado, yytext);
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

