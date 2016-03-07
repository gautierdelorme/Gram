all: binary/gram
	$^ < sources/gram.c

binary/gram: sources/*.c
	gcc -g -o $@ builds/*.o -Iincludes -ll -lm

sources/%.c: builds/%.o
	gcc -g -c $@ -o $^ -Iincludes

sources/%.c: sources/gram.y.c sources/gram.l.c includes/%.h

sources/gram.y.c: sources/gram.y
	bison -d $^
	@mv gram.tab.h includes/gram.h
	@mv gram.tab.c sources/gram.y.c

sources/gram.l.c: sources/gram.l
	flex $^
	@mv lex.yy.c sources/gram.l.c

clean:
	rm -f binary/gram builds/*.o
