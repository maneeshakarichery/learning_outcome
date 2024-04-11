#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

int create_linked_list();
int count_nodes(node_t *);

int main() {
    node_t *head = create_linked_list();

    printf("First Node Data: %d\n", head->data);

    int count = count_nodes(head);
    printf("Number of Nodes: %d\n", count);

    return 0;
}

node_t *create_linked_list() {
    node_t *head = malloc(sizeof(node_t));
    head->data = 78;

    node_t *current = malloc(sizeof(node_t));
    current->data = 98;
    head->next = current;

    current = malloc(sizeof(node_t));
    head->next->next = current;

    return head;
}

int count_nodes(node_t *head) {
    int count = 0;
    if (head == NULL) {
        printf("List is null\n");
    } else {
        node_t *ptr = head;
        while (ptr != NULL) {
            count++;
            ptr = ptr->next;  // Move to the next node
        }
    }
    return count;
}

