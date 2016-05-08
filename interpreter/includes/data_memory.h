#ifndef DATA_MEMORY_H
#define DATA_MEMORY_H

#define DEBUG_DATA_MEMORY 0
#define MAX_DATA 1024

typedef struct Data_Memory{
  int data[MAX_DATA];
	void (*put)(int key, int value);
  int (*get)(int index);
} Data_Memory;

Data_Memory* data_memory;

void new_data_memory();

#endif
