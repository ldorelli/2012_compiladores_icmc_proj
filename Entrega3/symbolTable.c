#include "symbolTable.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void symbolTable_init(Node * root, Node * dad) {
	/* Inicia os filhos como Null */
	memset(root->next, 0, sizeof root->next);
	root->attr = NULL;
	root->dad = dad;
}

void symbolTable_add(Node * root, STable_Entry t) {
	Node * aux = root;
	/*
		 Navega na arvore ate encontrar o ID buscado 
	*/
	int i;
	char * name = t.name;

	for(i = 0; name[i] != '\0'; i++) {
		if(aux->next[name[i]]) aux = aux->next[name[i]];
		else {
			aux->next[name[i]] = (Node*) malloc( sizeof(Node) );
			symbolTable_init(aux->next[name[i]], aux);
			aux = aux->next[name[i]];
		}
	}
	/* Atribui a entrada */
	aux->attr = (STable_Entry*) malloc(sizeof (STable_Entry));
	*aux->attr = t;
}

STable_Entry * symbolTable_find(Node *root, char * name) {
	Node * aux = root;
	int i;
	/* Navega na arvore até encontrar o item buscado */
	for(i = 0; aux && name[i] != '\0'; aux = aux->next[name[i]], i++);
	/* Se existe, retorna o atributo */
	if(aux) 
		return aux->attr;
	return 0;
}

void symbolTable_erase(Node * root) {
	int i;
	ParameterNode * old;
	/* Limpa a tabela de simbolos */
	for(i = 0; i < 256; i++) 
		if(root->next[i]) symbolTable_erase(root->next[i]);

	if(root->attr) {
		ParameterNode * aux = root->attr->parameters;
		while(aux) {
			old = aux;
			aux = aux->next;
			free(old);
		}

		root->attr->paramQty = 0;
		if(root->attr) free(root->attr);
	}

	free(root);
} 

int symbolTable_addParameter(Node * root, char * procedure, STable_Entry parameter)
{
	/* 
		Busca primeiramente a entrada na arvore 
		Se não achar o procedimento (Note que deveria!), retorna 0
		Se tudo ocorrer bem, retorna 1
		Se o parametro estiver presente mais de uma vez na lista, retorna -1
	*/
	if(!root) return 0;
	Node * aux = root;
	int i;
	/* Navega na arvore até encontrar o item buscado */
	for(i = 0; aux && procedure[i] != '\0'; aux = aux->next[procedure[i]], i++);

	if(!aux) return 0;
	if(!aux->attr) return 0;

	/* Navega pelos parametros, insere no final */
	ParameterNode * node = aux->attr->parameters, * prev;
	aux->attr->paramQty++;

	/* Se nao havia nenhum parametro ainda */
	if(!node) {
		node = (ParameterNode *) malloc(sizeof(ParameterNode));
		aux->attr->parameters = node;
		node->value = parameter;
		return 1;
	}
	int orig = 0;
	/* Enquanto houver proximo */
	while(node) {
		if(strcmp(node->value.name, parameter.name) == 0) return -orig - 1;
		prev = node;
		node = node->next;
		orig++;
	}
	/* Insere os valores */
	prev->next = (ParameterNode *) malloc(sizeof(ParameterNode));
	prev->next->value = parameter;
	return 1;
}