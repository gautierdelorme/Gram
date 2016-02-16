#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"

Table* symbols_table;

void init_symbols_table() {
  table_symboles = malloc(sizeof(Table));
}
