%token ER_IFL 
%token NRO_REAL
%token IDENT 
%token ER_IDG 
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
%token ER_NMF 
%token ER_CIN 
%token ER_CNF
%token NRO_INTEIRO 
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
%error-verbose

%%

program: 
		PROGRAM IDENT SB_PV  { printf("Programa identificado\n"); } corpo
	| 	PROGRAM error SB_PV { printf("Erro recuperado 1! \n"); } corpo 
	| 	error IDENT SB_PV { printf("Erro recuperado 2! \n"); } corpo;

corpo:	dc 

dc:	dc_c dc_v BEG { printf("Sessao declarativa OK. \n"); } ;

dc_c:	CONST IDENT OP_AT numero SB_PV dc_c 
	|	error IDENT OP_AT error SB_PV { printf("Falha ao reconhecer constante. Continuando...\n"); } 
	| 	CONST error OP_AT numero SB_PV { printf("Falha ao reconhecer constante 2. Continuando ... \n"); }
	|	CONST IDENT OP_AT error SB_PV { printf("Falha ao reconhecer constante 3. Continuando ... \n"); }
	| ;

dc_v:	VAR variaveis SB_DP tipo_var SB_PV { printf("Variavel identificada \n"); } dc_v 
	|	;

tipo_var:	INTEGER
		|	REAL;

variaveis:	IDENT mais_var

mais_var:	SB_VG variaveis
		| 	;

numero: NRO_REAL
		| NRO_INTEIRO ;

%%

void yyerror(const char *s) {
	printf("Error : %s\n", s);
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

