#include "assembly.h"
#include <stdarg.h>
#include "label.h"
#include <string.h>
#include "labels_table.h"
#include "error.h"

void close_assembly();
void write_assembly(char* fun, ...);
void second_wave();

void new_assembly_manager() {
  if (assembly_manager == NULL) {
    assembly_manager = malloc(sizeof(Assembly_Manager));
    assembly_manager->outfile = fopen( "gram.ass", "w" );
    assembly_manager->cpt = 1;
    assembly_manager->close_assembly = close_assembly;
    assembly_manager->write_assembly = write_assembly;
    assembly_manager->second_wave = second_wave;
  } else {
    error_manager->raise_error("ERROR ASSEMBLY MANAGER ALREADY EXISTING");
  }
}

void close_assembly() {
  fclose(assembly_manager->outfile);
}

void write_assembly(char* fun, ...) {
  va_list args;
  va_start(args, fun);
  vfprintf(assembly_manager->outfile, fun, args);
  va_end(args);
  fprintf(assembly_manager->outfile, "\n");
  assembly_manager->cpt++;
}

void second_wave() {
  FILE* in_ass_file  = fopen("gram.ass", "r");
  FILE* out_ass_file  = fopen("gram_final.ass", "w");
  char buf[256], str[256];
  char instruction[4];
  int result, num_instruction;
  Label* l;
  while (fgets (buf, sizeof(buf), in_ass_file)) {
    sscanf(buf, "%s", instruction);
    if (strcmp(instruction, "JMF") == 0) {
      sscanf(buf, "%s %d %d", instruction,  &result, &num_instruction);
      l = labels_table->get_label(num_instruction);
      sprintf(str, "%s %d %d\n", instruction, result, l->addr);
      fprintf(out_ass_file, "%s", str);
    } else {
      fprintf(out_ass_file, "%s", buf);
    }
  }
  fclose(in_ass_file);
  fclose(out_ass_file);
}
