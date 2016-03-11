#ifndef LABEL_H
#define LABEL_H

typedef struct Label {
	char* name;
	int addr;
  struct Label* next;
} Label;

Label* new_label(char* name);

void print_label(Label* l);

#endif
