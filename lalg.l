	/* scanner para a LALG */
%{
#include<string.h>
#include<stdio.h>
#include<limits.h>
#include"trie.h"

Trie pr;


%}
DIGITO	[[:digit:]]
LETRA	[[:alpha:]]
%%
	/*numeros e identificador*/
-{0,1}{DIGITO}+	{	/* numero inteiro */
	long long x;
	sscanf (yytext, "%lld", &x);
	if (x < INT_MAX && x > -INT_MAX)
		printf ("%s inteiro\n", yytext);
	else
		printf ("%s er_ifl\n", yytext);	/* erro de inteiro fora do limite */
	}
-{0,1}{DIGITO}+"."{DIGITO}+	{	/* numero real */
	printf ("%s real\n", yytext);	
	}

{LETRA}({LETRA}|{DIGITO})*	{	/* identificador */
	
	const char * identifier; 

	identifier = find(&pr, yytext, 0, strlen(yytext));

	if(identifier == NULL) {

		if (strlen (yytext) <= 20)
			printf ("%s ident\n", yytext);
		else
			printf ("%s er_idg\n", yytext);	/* erro de tamanho muito grande */
	} else {
		printf("%s %s\n", yytext, identifier);
	}
}


	/**program|begin|end|const|var|real|real|integer|char|procedure|else|readln|writeln|repeat|until|if|then|while|function	{/* palavras reservadas */
	
	/* operadores */
":="	printf("%s op_at\n", yytext);
"<>"	printf("%s op_df\n", yytext);
">="	printf("%s op_ge\n", yytext);
"<="	printf("%s op_le\n", yytext);
">"	printf("%s op_gr\n", yytext);
"<"	printf("%s op_ls\n", yytext);
"+"	printf("%s op_pl\n", yytext);
"-"	printf("%s op_mi\n", yytext);
"*"	printf("%s op_ml\n", yytext);
"/"	printf("%s op_dv\n", yytext);
	/* simbolos */
";"	printf("%s sb_pv\n", yytext);
"."	printf("%s sb_pf\n", yytext);
"="	printf("%s sb_eq\n", yytext);
	/*":"	printf("%s sb_dp\n", yytext);*/
","	printf("%s sb_vg\n", yytext);
"("	printf("%s sb_pa\n", yytext);
")"	printf("%s sb_pf\n", yytext);

"{"[^}]*"}"	/* apaga comentario (pode ter mais de uma linha) */
[\n\t\r ]	/* apaga caracteres inuteis */

	/* outros erros */
-{0,1}{DIGITO}+{LETRA}+	printf ("%s er_nmf\n", yytext);	/* numero mal formado */
	/*-{0,1}{DIGITO}+"."*/
.	printf ("%s er_cin\n", yytext); /* caractere inexistente */

%%


main(int argc, char **argv )
{
	initializeTrie(&pr);

	insert(&pr, "program", "program");
	insert(&pr, "begin", "begin");
	insert(&pr, "end", "end");
	insert(&pr, "const", "const");
	insert(&pr, "var", "var");
	insert(&pr, "real", "real");
	insert(&pr, "integer", "integer");
	insert(&pr, "char", "char");
	insert(&pr, "procedure", "procedure");
	insert(&pr, "if", "if");
	insert(&pr, "else", "else");
	insert(&pr, "readln", "readln");
	insert(&pr, "writeln", "writeln");
	insert(&pr, "repeat", "repeat");
	insert(&pr, "then", "then");
	insert(&pr, "until", "until");
	
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
			    yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	 yylex();
}
