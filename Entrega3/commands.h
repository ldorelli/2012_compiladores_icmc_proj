#ifndef COMANDS_H
#define COMANDS_H

#include <stdio.h>

#define CRCT 0
#define	CRVL 1
#define SOMA 2
#define SUBT 3
#define MULT 4
#define INVE 5
#define CONJ 6
#define DISJ 7
#define NEGA 8
#define CPME 9
#define CPMA 10
#define CPIG 11
#define CDES 12
#define CPMI 13
#define CMAI 14
#define ARMZ 15
#define DSVI 16
#define DSVF 17
#define LEIT 18
#define IMPR 19
#define ALME 20
#define INPP 21
#define PARA 22
#define PUSHER 23
#define CHPR 24
#define DESM 25
#define RTPR 26
#define COPVL 27
#define PARAM 28
#define DIVI 29

#define NOARG 30

typedef struct {
	int opCode;
	
	/* REAL, INTEIRO, NOARG */
	int type;

	int iArg;
	double rArg;
} CodeLine;

void printCommand(FILE *f, CodeLine line);

void flushCode(FILE * f, CodeLine code[], int * qty);

#endif