#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbol.h"

typedef struct Table{
	Symbol* symbols;
  int height;
} Table;

void new_symbols_table();
void add_symbol(char* name, int depth);

void remove_symbol(int depth);

#endif
