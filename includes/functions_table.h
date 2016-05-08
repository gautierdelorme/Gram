#ifndef FUNCTIONS_TABLE_H
#define FUNCTIONS_TABLE_H
#include "function.h"

#define  DEBUG_FUNCTIONS_TABLE 0

typedef struct Functions_Table{
	Function* functions;
  int height;
	void (*add_function)(char* name, int addr);
	int (*get_addr_function)(char* name);
  void (*clear)();
} Functions_Table;

Functions_Table* functions_table;

void new_functions_table();

#endif
