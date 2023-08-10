#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to check if a linked list contains a cycle
int check_cycle(Node* list) {
    Node* slow = list;
    Node* fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // If there is a cycle, the fast and slow pointers will meet
        if (slow == fast) {
            return 1;  // Cycle detected
        }
    }

    return 0;  // No cycle found
}

// Function to create a new node in the linked list
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a sample linked list for testing
Node* createSampleLinkedList() {
    Node* head = createNode(1);
    Node* second = createNode(2);
    Node* third = createNode(3);
    Node* fourth = createNode(4);
    Node* fifth = createNode(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;  // No cycle

    return head;
}

// Function to create a sample linked list with a cycle for testing
Node* createSampleLinkedListWithCycle() {
    Node* head = createNode(1);
    Node* second = createNode(2);
    Node* third = createNode(3);
    Node* fourth = createNode(4);
    Node* fifth = createNode(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = second;  // Cycle

    return head;
}

int main() {
    Node* list = createSampleLinkedList();
    printf("Does the linked list have a cycle? %s\n", check_cycle(list) ? "Yes" : "No");

    Node* listWithCycle = createSampleLinkedListWithCycle();
    printf("Does the linked list with a cycle? %s\n", check_cycle(listWithCycle) ? "Yes" : "No");

    // Clean up the memory
    free(list);
    free(listWithCycle);

    return 0;
}
