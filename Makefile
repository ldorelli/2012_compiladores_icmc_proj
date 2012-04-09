all:
	flex lalg.l
	gcc lex.yy.c trie.c -o t1 -lfl -ll
