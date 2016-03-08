#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbol.h"

typedef struct Table{
	Symbol* symbols;
  int height;
} Table;

void new_symbols_table();
void add_variable(char* name, int depth, int init, int constant);

void remove_symbol(int depth);

int get_addr_symbol(char* name, int depth);

int add_tmp_variable();
void remove_tmp_variable();

#endif
