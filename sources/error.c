#include "error.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void raise_error(char* msg, ...) {
  va_list arg;
  printf("\033[31;4m>>> ");
  va_start(arg, msg);
  vfprintf(stdout, msg, arg);
  va_end(arg);
  printf("\033[0m\n");
  exit(1);
}
