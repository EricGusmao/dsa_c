#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

void push(Node **head, Node **tail, int new_entry);

void shift(Node **head, Node **tail, int new_entry);

void print_items(Node *head);

void pop(Node **head, Node **tail);

void free_list(Node **head, Node **tail);

#endif
