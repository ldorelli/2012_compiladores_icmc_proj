all:
	yacc -d -v sintax.yacc 
	flex lalg.l
	gcc y.tab.c trie.c -o t2 -O2
