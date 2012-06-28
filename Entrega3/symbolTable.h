#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

// Tipo da variavel

typedef struct 
{
	/* data */
	char type;
	char category;
	char scope;

	/* Ident pode ir ate 20 */
	char name[21];

} Attributes ;

typedef struct Node_
{
	/* data */
	struct  Node_	* next[256];
	struct  Node_	* dad;
	Attributes 		* attr;

} Node;

void symbolTable_init(Node * root, Node * dad) ;

void symbolTable_add(Node * root, Attributes t) ;

Attributes * symbolTable_find(Node *root, char * name) ;

void symbolTable_erase(Node * root) ;

#endif