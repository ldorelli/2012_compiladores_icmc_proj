	/* scanner para a LALG */
%{
#include<string.h>
#include<stdio.h>
#include<limits.h>
#include"trie.h"
#include"y.tab.h"
#include"symbolTable.h"

Trie pr;
char ctext[100001];
double num_real;
int num_int;
int tok_idx; /* Será retornado pelo yylex() */
	/*int yylineno = 1;*/

extern YYSTYPE yylval;

%}
DIGITO	[[:digit:]]
LETRA	[[:alpha:]]

%%
	/* erro de comentario nao fechado */
"{"[^}]*  {
		int ss = strlen(yytext);
		int i;
		
		return ER_CNF; /* Comentario nao fechado */
	}

	/*numeros e identificador*/
{DIGITO}+	{	/* numero inteiro */
	
	long long x;
	sscanf (yytext, "%lld", &x);

	
	if (x < INT_MAX && x > -INT_MAX) {
		tok_idx = NRO_INTEIRO; /* Número inteiro */
	} else {
		yylval.type = ERROR;
		tok_idx = ER_IFL; /* Inteiro fora dos limites */
	}

	yylval.type = INTEGER;
	yylval.category = NRO_INTEIRO;
	sscanf (yytext, "%d", &yylval.ival);

	strcpy(ctext, yytext);
	return (tok_idx);

	}

{DIGITO}+"."{DIGITO}+	{	/* numero real */
	
	strcpy(ctext, yytext);

	yylval.type = REAL;
	yylval.category = NRO_REAL;
	sscanf (yytext, "%lf", &yylval.rval);

	return NRO_REAL;

	}

{LETRA}({LETRA}|{DIGITO})*	{	/* identificador ou palavra reservada */
	
	const char * identifier; 

	identifier = find(&pr, yytext, &tok_idx);

	if(identifier == NULL) {

		if (yyleng <= 20) {
			tok_idx = IDENT; /* Identificador */
			yylval.category = IDENT;
			strcpy(yylval.name, yytext);
		} else 
			tok_idx = ER_IDG; /* Erro de identificador grande */
	} 

	/* Se não entrou no if anterior eh palavra reservada */
	yylval.type = tok_idx;
	strcpy(ctext, yytext); /* Copia o texto */

	return (tok_idx);
	
	}


	/* operadores */


":="	{ 
	yylval.category=OP_AT;
	return OP_AT; /* ATtribution */
	
	}

"<>"	{
	yylval.category=OP_DF; 
	return OP_DF; /* DiFference */

	}

">="	{
	yylval.category=OP_GE; 
	return OP_GE; /* Greater Equal */

	}

"<="	{
	yylval.category=OP_LE; 
	return OP_LE; /* Less Equal */

	}

">"		{
	yylval.category=OP_GR; 
	return OP_GR; /* GReater */
	
	}

"<"		{
	yylval.category=OP_LS; 
	return OP_LS; /* LesS */
	
	}

"+"		{
	yylval.category=OP_PL;
	return OP_PL; /* PLus */
	
	}

"-"		{
	yylval.category=OP_MI; 
	return OP_MI; /* MInus */
	
	}

"*"		{
	yylval.category=OP_ML; 
	return OP_ML; /* MultipLation */

	}

"/"		{
	yylval.category=OP_DV; 
	return OP_DV; /* DiVision */
	
	}

"="		{
	yylval.category=OP_EQ; 
	return OP_EQ; /* EQual */
	
	}


	/* simbolos */
";"		{
	yylval.category=SB_PV; 
	return SB_PV; /* Ponto e Virgula */

	}

"."		{
	yylval.category=SB_PF; 
	return SB_PF; /* Ponto Final */
	
	}
	
":"		{
	yylval.category=SB_DP; 
	return SB_DP; /* Dois Pontos */

	}

","		{
	yylval.category=SB_VG; 
	return SB_VG; /* VirGula */

	}
	
"("		{
	yylval.category=SB_PO;  
	return SB_PO; /* Parenthesis Opening */

	}

")"		{
	yylval.category=SB_PC;  
	return SB_PC; /* Parenthesis Closing */

	}
	

"{"[^}]*"}"	{
	/* apaga comentario (pode ter mais de uma linha) */
		int skip = 0;
		int ss = strlen(yytext);
		int i;
		for(i = 0; i < ss; i++) if(yytext[i] == '\n') yylineno++;
	}
[\t\r ]	/* apaga caracteres inuteis */


"\n"	yylineno++;	
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

<<EOF>>   {  yyterminate(); }

.	{
	
	strcpy(ctext, yytext); 
	return ER_CIN; /* Caractere INexistente */
	
	}

%%

int yywrap(void) {
	return 1;
}
