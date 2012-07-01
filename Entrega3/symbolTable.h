#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#define ERROR -1

struct ParamNode;

// Tipo da variavel
typedef struct STEntry
{
	/* data */
	int type;
	int category;
	int scope;
	int paramQty;

	/* Para auxiliar na resolucao de jumps */
	int codeLine;
	/* Endereco da variavel no programa */
	int address;
	
	/* Valor caso seja inteiro */
	int ival;
	/* Valor caso seja real */
	double rval;

	int line; /* Linha original da definicao */

	/* Se eh um procedimento, parametros
	  Valor dificilmente ultrapassavel */
	struct ParamNode * parameters;
	/* Ident pode ir ate 20 */
	char name[21];

} STable_Entry; 

typedef struct ParamNode 
{
	STable_Entry		value;
	struct ParamNode * 	next;	
} ParameterNode ;


typedef struct Node_
{
	/* data */
	struct  Node_	* next[256];
	struct  Node_	* dad;
	STable_Entry 	* attr;

} Node;

typedef Node	 SymbolTable;

/* Insere um item na tabela de simbolos */
void symbolTable_init(Node * root, Node * dad) ;
/* Adiciona um item na tabela de simbolos especificada */
void symbolTable_add(Node * root, STable_Entry t) ;

/* 
	Adiciona um parametro de funcao  ao procedimento procedure na tabela root 
	Se ja existe um parametro com o mesmo nome, a funcao retorna o - indice
	do parametro original na lista de parametros  - 1  
	( se o parametro era o parametro 0, retorna -1) 
*/
int symbolTable_addParameter(Node * root, char * procedure, STable_Entry parameter);

/* Busca por uma entrada na tabela de simbolos */
STable_Entry * symbolTable_find(Node *root, char * name) ;
/* Deleta uma tabela de simbolos */
void symbolTable_erase(Node * current, Node * root) ;

#endif