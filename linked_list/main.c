#include "linked_list.h"

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;

    push(&head, &tail, 1);
    push(&head, &tail, 2);
    push(&head, &tail, 3);
    push(&head, &tail, 4);
    push(&head, &tail, 5);
    print_items(head);
    shift(&head, &tail, 20);
    print_items(head);
    pop(&head, &tail);
    print_items(head);

    free_list(&head, &tail);

    print_items(head);

    return 0;
}