#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbol.h"

#define  DEBUG_SYMBOLS_TABLE 0

typedef struct Symbols_Table{
	Symbol* symbols;
  int height;
	int current_depth;
	void (*add_variable)(char* name, int init, int constant);
	void (*remove_symbol)();
	int (*get_addr_symbol)(char* name);
	int (*add_tmp_variable)();
	void (*remove_tmp_variable)();
	int (*not_constant)(char* name);
} Symbols_Table;

Symbols_Table* symbols_table;

void new_symbols_table();

#endif
