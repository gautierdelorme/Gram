#include <stdio.h>
#include <stdlib.h>
#include "labels_table.h"
#include "error.h"

Labels_Table* labels_table;

void new_labels_table() {
  labels_table = malloc(sizeof(Labels_Table));
  labels_table->labels = NULL;
  labels_table->height = 0;
}

void print_labels_table() {
  Label* labels = labels_table->labels;
  printf("---------------\n");
  printf(" INDEX| ADDR \n");
  printf("---------------\n");
  while (labels != NULL) {
    print_label(labels);
    labels = labels->next;
  }
  printf("---------------\n");
}

void perform_add_label(Label* l) {
  if (labels_table->labels == NULL) {
    labels_table->labels = l;
  } else {
    l->next = labels_table->labels;
    labels_table->labels = l;
  }
  print_labels_table();
  labels_table->height++;
}

int add_label() {
  Label* l = new_label(labels_table->height+1);
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (labels->index != l->index)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    perform_add_label(l);
    return l->index;
  } else {
    raise_error("ERROR LABEL %s ALREADY IN THE LABELS TABLE", l->index);
  }
}

void update_label(int addr) {
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (labels->init == 1)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    raise_error("EVERY LABELS ARE INITIALIZED IN THE TABLE");
  } else {
    labels->addr = addr;
  }
}
