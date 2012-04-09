#include "trie.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int mapChar(char c) {
	if(c >= 'A' && c <= 'Z') {
		return c - 'A';
	} else {
		return 'Z' - 'A' + c - 'a';
	}
}

void initializeTrie(Trie * t) {
	/* Inicializa tudo em nulo */
	memset(t->branch, 0, sizeof t->branch);
	/* Seta o elemento em nulo */
	t->elem = NULL;
}

void insert_i(Trie * node, const char * key, const char * val, int pos, int n, int idx) 
{
	if( pos == n) 
	{	
		/* Se achou o elemento */
		int size = strlen(val);

		/* Se ainda está nulo, aloca o espaço */
		if(node->elem == NULL) 
			node->elem = (char*) malloc(sizeof(char) * size);
		/* Copia o identificador para a posição correta */
		strcpy(node->elem, val);

		node->idx = idx;
	} else {
		/* Se o nó que precisa ser inserido está nulo, alocar */
		if(node->branch[mapChar(val[pos])] == NULL) {
			node->branch[mapChar(val[pos])] = (Trie*) malloc(sizeof(Trie));
			initializeTrie(node->branch[mapChar(val[pos])]);
		}

 		insert_i(node->branch[mapChar(val[pos])], key, val, pos+1, n, idx);
	}
}

/* Interface para o insert interno (insert_i) */
void insert(Trie *node, const char *key, const char *val, int idx){
	insert_i(node, key, val, 0, strlen(key), idx);
}

/* Procura pelo elemento KEY na Trie, a partir de pos e com n elementos */
char* find2(Trie *node, const char * key, int pos, int n, int *idx) 
{
	if(pos == n) 
	{	
		/* Achou */
		*idx = node->idx;
		return node->elem;
	} else {
		if(node->branch[mapChar(key[pos])] == NULL) {
			/* Não Achou */
			return NULL;	
		} 
		else return find2(node->branch[mapChar(key[pos])], key, pos+1, n, idx);
	}
}

char* find(Trie *node, const char * key, int *idx) 
{
	return  find2(node, key, 0, strlen(key), idx);
}

