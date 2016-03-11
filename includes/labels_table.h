#ifndef LABELS_TABLE_H
#define LABELS_TABLE_H

#include "label.h"

typedef struct Labels_Table{
	Label* labels;
  int height;
} Labels_Table;

void new_labels_table();
void add_label(char* name);
void update_label(char* name, int addr);

#endif
