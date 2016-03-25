#ifndef LABELS_TABLE_H
#define LABELS_TABLE_H

#include "label.h"

typedef struct Labels_Table{
	Label* labels;
  int height;
	int (*add_label)();
	int (*add_label_while)();
	void (*update_label)(int addr);
	Label* (*get_label)(int index);
	int (*disabled_last_while)();
	void (*print_labels_table)();
} Labels_Table;

Labels_Table* labels_table;

void new_labels_table();

#endif
