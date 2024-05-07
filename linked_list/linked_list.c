#include "linked_list.h"

struct node
{
    int data;
    struct node *next;
};

static Node *create_new_node(int data)
{
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed. \n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

void push(Node **head, Node **tail, int new_entry)
{
    Node *new_node = create_new_node(new_entry);

    if (*tail == NULL)
    {
        *head = *tail = new_node;
    }
    else
    {
        (*tail)->next = new_node;
    }
    *tail = new_node;
}

void shift(Node **head, Node **tail, int new_entry)
{
    Node *new_node = create_new_node(new_entry);

    if (*head == NULL)
    {
        *head = *tail = new_node;
    }
    else
    {
        new_node->next = *head;
        *head = new_node;
    }
}

void print_items(Node *head)
{
    if (head == NULL)
    {
        printf("[]\n");
        return;
    }

    Node *current = head;

    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void pop(Node **head, Node **tail)
{
    if (*tail == NULL)
    {
        printf("The list is already empty");
        return;
    }

    if (*head == *tail)
    {
        free(*head);
        *head = *tail = NULL;
        return;
    }

    Node *current = *head;
    while (current->next != *tail)
    {
        current = current->next;
    }

    free(*tail);
    *tail = current;
    current->next = NULL;
}

void free_list(Node **head, Node **tail)
{
    Node *current = *head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }

    *head = *tail = NULL;
}
