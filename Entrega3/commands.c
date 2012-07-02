#include "commands.h"
#include "y.tab.h"

void printCommand(FILE * f, CodeLine line)
{
	int cmd = line.opCode;

	switch(cmd) {
		case CRCT:
			
			if(line.type == REAL)
				fprintf(f, "CRCT %lf\n", line.rArg);
			else fprintf(f, "CRCT %d\n", line.iArg);

			break;
		case CRVL:
			fprintf(f, "CRVL %d\n", line.iArg);
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
			fprintf(f, "CPMA\n");
			break;
		case CPIG :
			fprintf(f, "CPIG\n");
			break;
		case CDES :
			fprintf(f, "CDES\n");
			break;
		case CPMI :
			fprintf(f, "CPMI\n");
			break;
		case CMAI :
			fprintf(f, "CMAI \n");
			break;
		case ARMZ :
			fprintf(f, "ARMZ %d\n", line.iArg);
			break;
		case DSVI :
			fprintf(f, "DSVI %d\n", line.iArg);
			break;
		case DSVF :
			fprintf(f, "DSVF %d\n", line.iArg);
			break;
		case LEIT :
			fprintf(f, "LEIT\n");
			break;
		case IMPR :
			fprintf(f, "IMPR\n");
			break;
		case ALME :
			fprintf(f, "ALME%d\n", line.iArg);
			break;
		case INPP :
			fprintf(f, "INPP\n");
			break;
		case PARA :
			fprintf(f, "PARA\n");
			break;
		case PUSHER :
			fprintf(f, "PUSHER %d\n", line.iArg);
			break;
		case CHPR :
			fprintf(f, "CHPR %d\n", line.iArg);
			break;
		case DESM :
			fprintf(f, "DESM %d\n", line.iArg);
			break;
		case RTPR :
			fprintf(f, "RTPR\n");
			break;
		case COPVL :
			fprintf(f, "COPVL\n");
			break;
		case PARAM 	:
			fprintf(f, "PARAM %d\n", line.iArg);
			break;
		case DIVI:
			fprintf(f, "DIVI %d\n", line.iArg);
			break;
	}
}

/* Imprime codigo */
void flushCode(FILE * f, CodeLine code[], int  * qty) {
	int i;
	for(i = 0; i < *qty; i++) {
		if(code[i].type == INTEGER)
			printCommand(f, code[i]);
		else if(code[i].type == REAL)
			printCommand(f, code[i]);
		else  /* Aqui tanto faz o segundo argumento */
			printCommand(f, code[i]);
	}
	* qty = 0;
}