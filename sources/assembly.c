#include "assembly.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

FILE* outfile;

void init_assembly() {
  outfile = fopen( "gram.ass", "w" );
}

void close_assembly() {
  fclose(outfile);
}

void write_assembly(char* fun, ...) {
  va_list args;
  va_start(args, fun);
  vfprintf(outfile, fun, args);
  va_end(args);
  fprintf(outfile, "\n");
}