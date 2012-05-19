all:
	yacc -d -v teste.yacc
	lex lalg.l
	gcc y.tab.c trie.c -o t1 
