all:
	yacc -d -v our_dear_friend.yacc --debug --verbose 
	flex lalg.l
	gcc error_handling.c y.tab.c trie.c -o t1 -O2 
