all:
	bison -d interpreter.y
	@mv interpreter.tab.h includes/interpreter.y.h
	@mv interpreter.tab.c interpreter.y.c
	flex interpreter.l
	@mv lex.yy.c interpreter.l.c
	gcc -g -c -Wall interpreter.y.c -o builds/interpreter.y.o -Iincludes
	gcc -g -c -Wall interpreter.l.c -o builds/interpreter.l.o -Iincludes
	gcc -g -o builds/interpreter builds/interpreter.l.o builds/interpreter.y.o -Iincludes -ll -lm
	builds/interpreter < ../gram_final.ass

clean:
	rm -rf builds/*
