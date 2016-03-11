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
  printf(" NAME | ADDR \n");
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
  labels_table->height++;
  print_labels_table();
}

void add_label(char* name) {
  Label* l = new_label(name);
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (strcmp(labels->name, l->name) != 0)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    perform_add_label(l);
  } else {
    raise_error("ERROR LABEL %s ALREADY IN THE LABELS TABLE", l->name);
  }
}

void update_label(char* name, int addr) {
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (strcmp(labels->name, name) != 0)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    raise_error("LABEL %s NOT IN THE TABLE", name);
  } else {
    labels->addr = addr;
  }
}
