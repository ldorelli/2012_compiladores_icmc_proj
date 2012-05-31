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

%{ #include  "lex.yy.c" %}
%{ void yyerror(const char*); %}
/*%error-verbose*/

%%

program: 
		PROGRAM IDENT SB_PV  { printf("Programa identificado\n"); } corpo SB_PF
	| 	error IDENT SB_PV corpo SB_PF { yyerror("\"program\" esperado"); }
	| 	PROGRAM error SB_PV corpo SB_PF { yyerror("Nome do programa invalido"); } 
	|	PROGRAM IDENT error corpo SB_PF { yyerror ("';' esperado"); }
	|	PROGRAM error corpo SB_PF { yyerror ("Nome do programa invalido"); }
	|	PROGRAM IDENT SB_PV corpo error { yyerror("'.' esperado"); }
	;

corpo:
		dc BEG { printf ("Comandos aqui"); } END
	;

dc:
		dc_c dc_v dc_p
	;

dc_c:
		CONST IDENT OP_AT numero SB_PV dc_c 
	|	error IDENT OP_AT numero SB_PV { yyerror("\"const\" esperado"); } 
	| 	CONST error OP_AT numero SB_PV { yyerror("Identificador invalido"); }
	|	CONST IDENT error numero SB_PV { printf("':=' esperado"); }
	|	CONST IDENT OP_AT error SB_PV { printf("Valor invalido"); }
	|
	;

dc_v:
		VAR variaveis SB_DP tipo_var SB_PV dc_v
	|	error variaveis SB_DP tipo_var SB_PV dc_v { yyerror ("\"var\" esperado"); }
	|	VAR error SB_DP tipo_var SB_PV dc_v { yyerror ("Variaveis invalidas"); }
	|	VAR variaveis 
	|
	;

dc_p:
		PROCEDURE IDENT parametros SB_PV corpo_p dc_p
	|	error IDENT parametros SB_PV corpo_p dc_p { yyerror ("\"procedure\" esperado"); }
	|	PROCEDURE error parametros SB_PV corpo_p dc_p { yyerror ("Identificador invalido"); }
	|	
	;

dc_loc:
		dc_v
	;

parametros:
		SB_PO lista_par SB_PC
	|	error lista_par SB_PC { yyerror ("'(' esperado"); }
	|	SB_PO lista_par error { yyerror ("')' esperado"); }
	|	error lista_par error { yyerror ("'(' e ')' esperados"); }
	|
	;

lista_par:
		variaveis SB_DP tipo_var mais_par
	|	variaveis error tipo_var mais_par { yyerror ("':' esperado"); }
	|	error tipo_var mais_par { yyerror ("Identificador invalido"); }
	|	variaveis error mais_par { yyerror ("Tipo do identificador esperado"); }
	;

mais_par:
		lista_par
	|
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

numero:
		NRO_REAL
	|	NRO_INTEIRO
	;

corpo_p:
		dc_loc BEG { printf ("coloque comandos aqui\n"); } END SB_PV
	|	dc_loc error END SB_PV { yyerror ("\"begin\" esperado"); }
	|	dc_loc BEG error SB_PV { yyerror ("\"end\" esperado"); }
		dc_loc BEG END error { yyerror ("';' esperado"); }
	;
%%

void yyerror(const char *s) {
	printf("Erro na linha %d: %s\n", yylineno, s);
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

