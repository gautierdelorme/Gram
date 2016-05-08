#include <stdio.h>
#include <stdlib.h>
#include "data_memory.h"
#include "error.h"
#include <string.h>

int get_data_memory(int index);
void put_data_memory(int key, int value);

void new_data_memory() {
  if (data_memory == NULL) {
    data_memory = malloc(sizeof(Data_Memory));
    data_memory->put = put_data_memory;
    data_memory->get = get_data_memory;
  } else {
    error_manager->raise_error("ERROR DATA MEMORY ALREADY EXISTING");
  }
}


int get_data_memory(int index) {
  if (index < MAX_DATA) {
    return data_memory->data[index];
  } else {
    error_manager->raise_error("ERROR GETTING DATA: index out of bounds.");
    return -1;
  }
}

void put_data_memory(int key, int value) {
  data_memory->data[key] = value;
}
