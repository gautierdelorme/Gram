all: binary/gram
	$^ < sources/gram.c

binary/gram: builds/symbols_table.o builds/symbol.o builds/error.o builds/gram.l.o builds/gram.y.o
	gcc -g -o $@ $^ -Iincludes -ll -lm

builds/%.o: sources/%.c
	gcc -g -c $^ -o $@ -Iincludes

sources/%.c: sources/gram.y.c sources/gram.l.c

sources/gram.y.c: sources/gram.y
	bison -d $^
	@mv gram.tab.h includes/gram.h
	@mv gram.tab.c sources/gram.y.c

sources/gram.l.c: sources/gram.l
	flex $^
	@mv lex.yy.c sources/gram.l.c

clean:
	rm -f binary/gram builds/*.o
