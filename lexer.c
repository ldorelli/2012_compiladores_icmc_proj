#include <stdio.h>

int main (void) {
	char op[100], name[100], inicio[100];
	scanf ("%s", inicio);
	while (scanf ("%s%s", op, name) != EOF) {
		/*printf ("\"%s\"\t{\n\tprintf(\"%%s op_%s\\n\", yytext);\n}\n", op, name);*/
		printf ("\"%s\"\tprintf(\"%%s %s_%s\\n\", yytext);\n", op, inicio, name);
	}
	return 0;
}
