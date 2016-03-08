#ifndef SYMBOL_H
#define SYMBOL_H

typedef enum TYPE {
  INT,
  FUN
} TYPE;

typedef struct Symbol {
	char* name;
  TYPE type;
	int addr;
	int init;
  int constant;
  int depth;
  struct Symbol* next;
} Symbol;

Symbol* new_symbol(char* name, int depth, int init, int constant, TYPE type);
void print_symbol(Symbol* s);

#endif
