#ifndef LABELS_TABLE_H
#define LABELS_TABLE_H

#include "label.h"

typedef struct Labels_Table{
	Label* labels;
  int height;
} Labels_Table;

void new_labels_table();
int add_label();
void update_label(int addr);

#endif
