all:
	yacc -d -v syntax.yacc 
	flex lalg.l
	gcc y.tab.c trie.c symbolTable.c -o t2 -O2
