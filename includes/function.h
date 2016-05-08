#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct Function {
	char* name;
	int addr;
  struct Function* next;
  void (*print_function)(struct Function*);
} Function;

Function* new_function(char* name, int addr);

#endif
