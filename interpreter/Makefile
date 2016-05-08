C_FILES:=$(wildcard sources/*.c)
O_FILES:=$(C_FILES:sources/%.c=builds/%.o)

all: binary/interpreter
	$^ < ../gram_final.ass

binary/interpreter: $(O_FILES)
	gcc -g -o $@ $^ -Iincludes -ll -lm

builds/%.o: sources/%.c
	gcc -g -c -Wall $^ -o $@ -Iincludes

sources/%.c: includes/%.h sources/interpreter.y.c sources/interpreter.l.c
	@#

sources/interpreter.y.c: sources/interpreter.y
	bison -d $^
	@mv interpreter.tab.h includes/interpreter.y.h
	@mv interpreter.tab.c sources/interpreter.y.c

sources/interpreter.l.c: sources/interpreter.l
	flex $^
	@mv lex.yy.c sources/interpreter.l.c

clean:
	rm -f binary/interpreter builds/*.o
