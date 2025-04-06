#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        // Save the next node
        next = current->next;
        // Reverse the current node's pointer
        current->next = prev;
        // Move pointers one step forward
        prev = current;
        current = next;
    }
    // Update the head
    head = prev;
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Helper function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printf("Original List:\n");
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}

