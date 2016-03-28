#include <stdio.h>
#include <stdlib.h>
#include "labels_table.h"
#include "error.h"

int add_label();
int add_label_while();
void update_label(int addr);
Label* get_label(int index);
int disabled_last_while();
void print_labels_table();

void new_labels_table() {
  if (labels_table == NULL) {
    labels_table = malloc(sizeof(Labels_Table));
    labels_table->labels = NULL;
    labels_table->height = 0;
    labels_table->add_label = add_label;
    labels_table->add_label_while = add_label_while;
    labels_table->update_label = update_label;
    labels_table->get_label = get_label;
    labels_table->disabled_last_while = disabled_last_while;
    labels_table->print_labels_table = print_labels_table;
  } else {
    error_manager->raise_error("ERROR LABELS TABLE ALREADY EXISTING");
  }
}

void print_labels_table() {
  Label* labels = labels_table->labels;
  printf("--------------------\n");
  printf(" INDEX| ADDR | INIT \n");
  printf("--------------------\n");
  while (labels != NULL) {
    labels->print_label(labels);
    labels = labels->next;
  }
  printf("--------------------\n");
}

void perform_add_label(Label* l) {
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (labels->index != l->index)) {
    labels = labels->next;
  }
  if (labels !=  NULL) {
    error_manager->raise_error("ERROR LABEL %d ALREADY IN THE LABELS TABLE", l->index);
  }
  if (labels_table->labels == NULL) {
    labels_table->labels = l;
  } else {
    l->next = labels_table->labels;
    labels_table->labels = l;
  }
  labels_table->height++;
  if (DEBUG_LABELS_TABLE) {
    print_labels_table();
  }
}

int add_label() {
  Label* l = new_label(labels_table->height+1);
  perform_add_label(l);
  return l->index;
}

int add_label_while() {
  Label* l = new_label(labels_table->height+1);
  l->set_is_while(l);
  perform_add_label(l);
  return l->index;
}

void update_label(int addr) {
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (labels->init == 1)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    error_manager->raise_error("EVERY LABELS ARE INITIALIZED IN THE TABLE");
  } else {
    labels->init = 1;
    labels->addr = addr;
  }
  if (DEBUG_LABELS_TABLE) {
    print_labels_table();
  }
}

Label* get_label(int index) {
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (labels->index != index)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    error_manager->raise_error("ERROR LABEL %d NOT IN THE LABELS TABLE", index);
  }
  return labels;
}

int disabled_last_while() {
  Label* labels = labels_table->labels;
  while ((labels != NULL) && (labels->is_while == 0)) {
    labels = labels->next;
  }
  if (labels ==  NULL) {
    error_manager->raise_error("NO WHILE LABEL ACTIVATED IN THE TABLE");
  }
  labels->is_while = 0;
  return labels->index;
}
