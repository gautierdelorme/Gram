C_FILES:=$(wildcard sources/*.c)
O_FILES:=$(C_FILES:sources/%.c=builds/%.o)

all: binary/gram
	$^ < test.c

binary/gram: $(O_FILES)
	gcc -g -o $@ $^ -Iincludes -ll -lm

builds/%.o: sources/%.c
	gcc -g -c $^ -o $@ -Iincludes

sources/%.c: includes/%.h sources/gram.y.c sources/gram.l.c
	@echo ''

sources/gram.y.c: sources/gram.y
	bison -d $^
	@mv gram.tab.h includes/gram.y.h
	@mv gram.tab.c sources/gram.y.c

sources/gram.l.c: sources/gram.l
	flex $^
	@mv lex.yy.c sources/gram.l.c

clean:
	rm -f binary/gram builds/*.o
