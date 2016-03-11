#ifndef LABEL_H
#define LABEL_H

typedef struct Label {
	int index;
	int addr;
  int init;
  struct Label* next;
} Label;

Label* new_label(int index);

void print_label(Label* l);

#endif
