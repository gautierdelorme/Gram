#ifndef SYMBOLS_TABLE_H
#define SYMBOLS_TABLE_H
#include "symbol.h"

#define  DEBUG_SYMBOLS_TABLE 0

typedef struct Symbols_Table{
	Symbol* symbols;
  int height;
	int current_depth;
	int (*add_variable)(char* name, int init, int constant);
	int (*add_pointer)(char* name, int init);
	int (*add_array)(char* name, int size);
	void (*remove_symbol)();
	int (*get_addr_symbol)(char* name);
	int (*add_tmp_variable)();
	void (*remove_tmp_variable)();
	int (*not_constant)(char* name);
} Symbols_Table;

Symbols_Table* symbols_table;

void new_symbols_table();

#endif
