#include "symbolTable.h"
#include <string.h>
#include <stdlib.h>

void symbolTable_init(Node * root, Node * dad) {
	memset(root->next, 0, sizeof root->next);
	root->attr = NULL;
	root->dad = dad;
}

void symbolTable_add(Node * root, Attributes t) {
	Node * aux = root;

	int i;
	char * name = t.name;
	for(i = 0; name[i] != '\0'; i++) {
		if(aux->next[name[i]]) aux = aux->next[name[i]];
		else {
			aux->next[i] = (Node*) malloc( sizeof(Node) );
			symbolTable_init(aux->next[i], aux);
			aux = aux->next[i];
		}
	}
	aux->attr = (Attributes*) malloc(sizeof (Attributes));
	*aux->attr = t;
}

Attributes * symbolTable_find(Node *root, char * name) {
	Node * aux = root;
	int i;
	for(i = 0; aux && name[i] != '\0'; i++, aux = aux->next[name[i]]) ;
	if(aux) 
		return aux->attr;
	return 0;
}

void symbolTable_erase(Node * root) {
	int i;
	for(i = 0; i < 256; i++) 
		if(root->next[i]) symbolTable_erase(root->next[i]);
	if(root->attr) free(root->attr);
	free(root);
}