#ifndef LABEL_H
#define LABEL_H

typedef struct Label {
	int index;
	int addr;
  int init;
	int is_while;
  struct Label* next;
	void (*print_label)(struct Label*);
	void (*set_is_while)(struct Label*);
} Label;

Label* new_label(int index);

#endif
