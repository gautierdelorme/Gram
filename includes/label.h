#ifndef LABEL_H
#define LABEL_H

typedef struct Label {
	int index;
	int addr;
  int init;
	int is_while;
  struct Label* next;
} Label;

Label* new_label(int index);

void print_label(Label* l);
void set_is_while(Label* l);

#endif
