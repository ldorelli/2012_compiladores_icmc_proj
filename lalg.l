	/* scanner para a LALG */
%{
#include<string.h>
#include<stdio.h>
#include<limits.h>
#include"trie.h"
#include"y.tab.h"

Trie pr;
char ctext[100001];
double num_real;
int num_int;
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

	/* erro de comentario nao fechado */
"{". {
	return ER_CNF; /* Comentario nao fechado */
	}
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

int yywrap(void) {
	return 1;
}
