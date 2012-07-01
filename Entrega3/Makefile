all:
	yacc -d -v syntax.yacc 
	flex lalg.l
	gcc -g y.tab.c trie.c symbolTable.c -o t2 -O2 
