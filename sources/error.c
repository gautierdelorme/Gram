#include "error.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void raise_error(char* msg, ...) {
  va_list args;
  printf("\033[31;4m>>> ");
  va_start(args, msg);
  vfprintf(stdout, msg, args);
  va_end(args);
  printf("\033[0m\n");
  exit(1);
}
