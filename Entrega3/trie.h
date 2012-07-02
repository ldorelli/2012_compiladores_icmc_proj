#ifndef _TRIE_H_
#define _TRIE_H_

typedef struct trie 
{
	/* data */
	struct trie* branch[256];
	char*	elem; /* Valor */
	int 	idx; /* Índice do Token no vetor de tokens */
} Trie;

int mapChar(char c) ;
void initializeTrie(Trie * t);
void insert_i(Trie * node, const char * key, const char * val, int pos, int n, int idx);
void insert(Trie *node, const char * key, const char *val, int idx);

/* 
	Procura o elemento identificado por KEY, retornando 
	o valor armazenado (que é a própria chave) e alterando
	a variável idx para o valor armazenado na estrutura 
*/
char* find2(Trie *node, const char * key, int pos, int n, int *idx);
char* find(Trie *node, const char * key, int *idx);

#endif
