	/* scanner para a LALG */
%{
#include<string.h>
#include<stdio.h>
#include<limits.h>
#include"trie.h"

Trie pr;
char ctext[100001];
double num_real;
int num_int;

#define ER_IFL 1
#define NRO_REAL 2
#define IDENT 3
#define ER_IDG 4
#define OP_AT 5
#define	OP_DF 6
#define OP_GE 7
#define OP_LE 8
#define OP_GR 9
#define OP_LS 10
#define OP_PL 11
#define OP_MI 12
#define OP_ML 13
#define OP_DV 14
#define OP_EQ 15
#define SB_PV 16
#define SB_PF 17
#define SB_DP 18
#define SB_VG 19
#define SB_PO 20
#define SB_PC 21
#define ER_NMF 22
#define ER_CIN 41
#define NRO_INTEIRO 42

const char * token_list[] = { 
	 /* Vetor com os nomes dos tokens */
	"dummy", 
	"er_ifl",  
	"nro_real", 
	"ident",
	"er_idg",
	"op_at",
	"op_df",
	"op_ge",
	"op_le",
	"op_gr",
	"op_ls",
	"op_pl",	
	"op_mi",
	"op_ml",
	"op_dv",
	"op_eq",
	"sb_pv",
	"sb_pf",
	"sb_dp",
	"sb_vg",
	"sb_po",
	"sb_pc",
	"er_nmf", 
	"program",
	"begin",
	"end",
	"const",
	"var",
	"real",
	"integer",
	"char",
	"procedure",
	"if",
	"else",
	"readln",
	"writeln",
	"repeat",
	"then",
	"until",
	"while",
	"function",
	"err_cin",
	"nro_inteiro"
};

int tok_idx; /* Será retornado pelo yylex() */

%}
DIGITO	[[:digit:]]
LETRA	[[:alpha:]]
%%
	/*numeros e identificador*/
{DIGITO}+	{	/* numero inteiro */
	
	long long x;
	sscanf (yytext, "%lld", &x);
	
	if (x < INT_MAX && x > -INT_MAX) {
		tok_idx = NRO_INTEIRO; /* Número inteiro */
	} else {
		tok_idx = ER_IFL; /* Inteiro fora dos limites */
	}

	strcpy(ctext, yytext);
	return (tok_idx);

	}

{DIGITO}+"."{DIGITO}+	{	/* numero real */
	
	strcpy(ctext, yytext);

	return NRO_REAL;

	}

{LETRA}({LETRA}|{DIGITO})*	{	/* identificador ou palavra reservada */
	
	const char * identifier; 

	identifier = find(&pr, yytext, &tok_idx);

	if(identifier == NULL) {

		if (yyleng <= 20) 
			tok_idx = IDENT; /* Identificador */
		else 
			tok_idx = ER_IDG; /* Erro de identificador grande */
	} 

	/* Se não entrou no if anterior eh palavra reservada */

	strcpy(ctext, yytext); /* Copia o texto */

	return (tok_idx);
	
	}


	/* operadores */


":="	{ 
	strcpy(ctext, yytext); 
	return OP_AT; /* ATtribution */
	
	}

"<>"	{
	strcpy(ctext, yytext); 
	return OP_DF; /* DiFference */

	}

">="	{
	strcpy(ctext, yytext); 
	return OP_GE; /* Greater Equal */

	}

"<="	{
	strcpy(ctext, yytext); 
	return OP_LE; /* Less Equal */

	}

">"		{
	strcpy(ctext, yytext); 
	return OP_GR; /* GReater */
	
	}

"<"		{
	strcpy(ctext, yytext); 
	return OP_LS; /* LesS */
	
	}

"+"		{
	strcpy(ctext, yytext); 
	return OP_PL; /* PLus */
	
	}

"-"		{
	strcpy(ctext, yytext); 
	return OP_MI; /* MInus */
	
	}

"*"		{
	strcpy(ctext, yytext); 
	return OP_ML; /* MultipLation */

	}

"/"		{
	strcpy(ctext, yytext); 
	return OP_DV; /* DiVision */
	
	}

"="		{
	strcpy(ctext, yytext); 
	return OP_EQ; /* EQual */
	
	}


	/* simbolos */
";"		{
	strcpy(ctext, yytext); 
	return SB_PV; /* Ponto e Virgula */

	}

"."		{
	strcpy(ctext, yytext); 
	return SB_PF; /* Ponto Final */
	
	}
	
":"		{
	strcpy(ctext, yytext); 
	return SB_DP; /* Dois Pontos */

	}

","		{
	strcpy(ctext, yytext); 
	return SB_VG; /* VirGula */

	}
	
"("		{
	strcpy(ctext, yytext); 
	return SB_PO; /* Parenthesis Opening */

	}

")"		{
	strcpy(ctext, yytext); 
	return SB_PC; /* Parenthesis Closing */

	}
	

"{"[^}]*"}"	/* apaga comentario (pode ter mais de uma linha) */
[\n\t\r ]	/* apaga caracteres inuteis */

	/* outros erros */
-{0,1}{DIGITO}+{LETRA}({LETRA}|{DIGITO})*"."({LETRA}|{DIGITO})*	{
	
	strcpy(ctext, yytext); 
	return ER_NMF;	/* Numero Mal Formado */

	}
	
-{0,1}{DIGITO}+{LETRA}({LETRA}|{DIGITO})*	{
	
	strcpy(ctext, yytext); 
	return ER_NMF;	/* Numero Mal Formado */	

	}

-{0,1}{DIGITO}+"."{DIGITO}*{LETRA}({LETRA}|{DIGITO})* {
	strcpy(ctext, yytext); 
	return ER_NMF;	/* Numero Mal Formado */	

	}	

<<EOF>>    yyterminate();

.	{
	
	strcpy(ctext, yytext); 
	return ER_CIN; /* Caractere INexistente */
	
	}

%%

int get_token(char *tok, char *text) {
	int tk = yylex(); 
	
	if(tk) {
		strcpy(tok, token_list[tk]);
		strcpy(text, ctext);
	}
	return tk;
}

int main(int argc, char **argv )
{
	initializeTrie(&pr);

	insert(&pr, "program", "program", 23);
	insert(&pr, "begin", "begin", 24);
	insert(&pr, "end", "end", 25);
	insert(&pr, "const", "const", 26);
	insert(&pr, "var", "var", 27);
	insert(&pr, "real", "real", 28);
	insert(&pr, "integer", "integer", 29);
	insert(&pr, "char", "char", 30);
	insert(&pr, "procedure", "procedure", 31);
	insert(&pr, "if", "if", 32);
	insert(&pr, "else", "else", 33);
	insert(&pr, "readln", "readln", 34);
	insert(&pr, "writeln", "writeln", 35);
	insert(&pr, "repeat", "repeat", 36);
	insert(&pr, "then", "then", 37);
	insert(&pr, "until", "until", 38);
	insert(&pr, "while", "while", 39);
	insert(&pr, "function", "function", 40);
	
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
			    yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	char next_text[1000];
	char next_token[1000];

	 /*yylex();*/
	while(get_token(next_token, next_text)) {
			/* Pega um indice que aponta para o vetor de tokens */
	 		printf("%s %s \n", next_text, next_token);
	}

	return 0;
}
