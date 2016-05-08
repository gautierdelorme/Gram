#include <stdio.h>
#include <stdlib.h>
#include "functions_table.h"
#include "error.h"
#include <string.h>

void add_function(char* name, int addr);
int get_addr_function(char* name);
void clear_functions_table();

void new_functions_table() {
  if (functions_table == NULL) {
    functions_table = malloc(sizeof(Functions_Table));
    functions_table->functions = NULL;
    functions_table->height = 0;
    functions_table->add_function = add_function;
    functions_table->get_addr_function = get_addr_function;
    functions_table->clear = clear_functions_table;
  } else {
    error_manager->raise_error("ERROR FUNCTIONS TABLE ALREADY EXISTING");
  }
}

void print_functions_table() {
  Function* functions = functions_table->functions;
  printf("---------------\n");
  printf(" NAME | ADDR\n");
  printf("---------------\n");
  while (functions != NULL) {
    functions->print_function(functions);
    functions = functions->next;
  }
  printf("---------------\n");
}

void perform_add_function(Function* f) {
  if (functions_table->functions == NULL) {
    functions_table->functions = f;
  } else {
    f->next = functions_table->functions;
    functions_table->functions = f;
  }
  functions_table->height++;
  if (DEBUG_FUNCTIONS_TABLE) {
    print_functions_table();
  }
}

void add_function(char* name, int addr) {
  Function* f = new_function(name, addr);
  Function* functions = functions_table->functions;
  while ((functions != NULL) && (strcmp(functions->name, f->name) != 0)) {
    functions = functions->next;
  }
  if (functions !=  NULL) {
    error_manager->raise_error("ERROR FUNCTION %s ALREADY IN THE FUNCTIONS TABLE", f->name);
  }
  perform_add_function(f);
}

Function* get_function(char* name) {
  Function* functions = functions_table->functions;
  while ((functions != NULL) && (strcmp(functions->name, name) != 0)) {
    functions = functions->next;
  }
  if (functions ==  NULL) {
    error_manager->raise_error("ERROR FUNCTION %s NOT IN THE TABLE", name);
  }
  return functions;
}

int get_addr_function(char* name) {
  return get_function(name)->addr;
}

void clear_functions_table() {
  functions_table->functions = NULL;
  functions_table->height = 0;
}
