all: lex.l lex.y
	clear
	flex -i lex.l
	bison lex.y
	gcc lex.tab.c -lfl -lm
	./a.out