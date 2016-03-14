#include "assembly.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "label.h"
#include <string.h>
#include "labels_table.h"

FILE* outfile;
int cpt_asm;

void init_assembly() {
  outfile = fopen( "gram.ass", "w" );
  cpt_asm = 1;
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
  cpt_asm++;
}

int get_cpt_asm() {
  return cpt_asm;
}

void second_wave() {
  FILE* in_ass_file  = fopen("gram.ass", "r");
  FILE* out_ass_file  = fopen("gram_final.ass", "w");
  char buf[256], str[256];
  char instruction[3];
  int result, num_instruction;
  Label* l;
  while (fgets (buf, sizeof(buf), in_ass_file)) {
    sscanf(buf, "%s", instruction);
    if (strcmp(instruction, "JMF") == 0) {
      sscanf(buf, "%s %d %d",instruction,  &result, &num_instruction);
      l = get_label(num_instruction);
      sprintf(str, "%s %d %d\n", instruction, result, l->addr);
      fprintf(out_ass_file, str);
    } else {
      fprintf(out_ass_file, buf);
    }
  }
  fclose(in_ass_file);
  fclose(out_ass_file);
}
