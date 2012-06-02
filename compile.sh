yacc -d -t -v $1.yacc --debug --verbose
lex lalg.l
gcc y.tab.c trie.c -o $1.out
