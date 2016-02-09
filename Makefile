all:
	bison -d -v gram.y
	mv gram.tab.h gram.h
	mv gram.tab.c gram.y.c
	flex gram.l
	mv lex.yy.c gram.l.c
	gcc -c gram.l.c -o gram.l.o
	gcc -c gram.y.c -o gram.y.o
	gcc -o gram gram.l.o gram.y.o -ll -lm
	rm gram.h gram.l.c gram.y.c *.o

test: all
	./gram < gram.c > gram.ass
