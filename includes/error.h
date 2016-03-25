#ifndef ERROR_H
#define ERROR_H

typedef struct Error_Manager{
  void (*raise_error)(char* msg, ...);
} Error_Manager;

Error_Manager *error_manager;

void new_error_manager();

#endif
