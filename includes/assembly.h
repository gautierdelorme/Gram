#ifndef ASSEMBLY_H
#define ASSEMBLY_H
#include <stdlib.h>
#include <stdio.h>

typedef struct Assembly_Manager{
  FILE* outfile;
  int cpt;
  void (*close_assembly)();
  void (*write_assembly)(char* fun, ...);
  void (*second_wave)();
} Assembly_Manager;

Assembly_Manager *assembly_manager;

void new_assembly_manager();

#endif
