#ifndef _TRIE_H_
#define _TRIE_H_

typedef struct trie 
{
	/* data */
	struct trie* branch[50];
	char*	elem;
} Trie;

int mapChar(char c) ;
void initializeTrie(Trie * t);
void insert_i(Trie * node, const char * key, const char * val, int pos, int n);
void insert(Trie *node, const char * key, const char *val);
char* find(Trie *node, const char * key, int pos, int n);


#endif