#include <stdio.h>
#include <stdlib.h>

/* Definition of a node in the linked list*/
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/*  Function to check if a linked list contains a cycle */
int check_cycle(Node* list) {
    Node* slow = list;
    Node* fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        /* If there is a cycle, the fast and slow pointers will meet */
        if (slow == fast) {
            return 1;  /* Cycle detected */
        }
    }

    return 0;  /* No cycle found */
}
