#include "commands.h"

void printCommand(FILE * f, int cmd, int arg)
{
	switch(cmd) {
		case CRCT:
			fprintf(f, "CRCT %d\n", arg);
			break;
		case CRVL:
			fprintf(f, "CRVL %d\n", arg);
			break;
		case SOMA:
			fprintf(f, "SOMA\n");
			break;
		case SUBT:
			fprintf(f, "SUBT\n");
			break;
		case MULT:
			fprintf(f, "MULT\n");
			break;
		case INVE:
			fprintf(f, "INVE\n");
			break;
		case CONJ:
			fprintf(f, "CONJ\n");
			break;
		case DISJ:
			fprintf(f, "DISJ\n");
			break;
		case NEGA:
			fprintf(f, "NEGA\n");
			break;
		case CPME:
			fprintf(f, "CPME\n");
			break;
		case CPMA :
			fprintf(f, "CPMA \n");
			break;
		case CPIG :
			fprintf(f, "CPIG \n");
			break;
		case CDES :
			fprintf(f, "CDES \n");
			break;
		case CPMI :
			fprintf(f, "CPMI \n");
			break;
		case CMAI :
			fprintf(f, "CMAI \n");
			break;
		case ARMZ :
			fprintf(f, "ARMZ %d\n", arg);
			break;
		case DSVI :
			fprintf(f, "DSVI %d\n", arg);
			break;
		case DSVF :
			fprintf(f, "DSVF %d\n", arg);
			break;
		case LEIT :
			fprintf(f, "LEIT \n");
			break;
		case IMPR :
			fprintf(f, "IMPR \n");
			break;
		case ALME :
			fprintf(f, "ALME %d\n", arg);
			break;
		case INPP :
			fprintf(f, "INPP \n");
			break;
		case PARA :
			fprintf(f, "PARA \n");
			break;
		case PUSHER :
			fprintf(f, "PUSHER %d\n", arg);
			break;
		case CHPR :
			fprintf(f, "CHPR %d\n", arg);
			break;
		case DESM :
			fprintf(f, "DESM %d\n", arg);
			break;
		case RTPR :
			fprintf(f, "RTPR \n");
			break;
		case COPVL :
			fprintf(f, "COPVL \n");
			break;
		case PARAM 	:
			fprintf(f, "PARAM %d\n", arg);
			break;
		case DIVI:
			fprintf(f, "DIVI %d\n", arg);
			break;
	}
}

/* Imprime codigo */
void flushCode(FILE * f, int code[][2], int  * qty) {
	int i;
	for(i = 0; i < *qty; i++) 
		printCommand(f, code[i][0], code[i][1]);
	* qty = 0;
}