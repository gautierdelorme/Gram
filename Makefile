all:
	bison -d -v gram.y
	mv gram.tab.h gram.h
	mv gram.tab.c gram.y.c
	flex gram.l
	mv lex.yy.c gram.l.c
	gcc -c gram.l.c
	gcc -c gram.y.c
	gcc -c symbols_table.c
	gcc -o gram symbols_table.o gram.l.o gram.y.o -ll -lm
	rm gram.h gram.l.c gram.y.c *.o

test: all
	./gram < gram.c > gram.ass
