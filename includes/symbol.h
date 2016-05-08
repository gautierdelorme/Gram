#ifndef SYMBOL_H
#define SYMBOL_H

typedef struct Symbol {
	char* name;
	int addr;
	int init;
  int constant;
  int depth;
  struct Symbol* next;
  void (*print_symbol)(struct Symbol*);
} Symbol;

Symbol* new_symbol(char* name, int depth, int init, int constant);

#endif
