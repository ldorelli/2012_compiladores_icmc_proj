all:
	yacc -d -v syntax.yacc 
	flex lalg.l
	gcc -g y.tab.c trie.c symbolTable.c commands.c -o t3.exe -O2 
