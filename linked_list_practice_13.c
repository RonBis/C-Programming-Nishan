#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to delete the 3rd node (index 2)
void deleteThirdNode(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL || (*head)->next->next == NULL) {
        printf("Cannot delete the 3rd node; list is too short.\n");
        return;
    }

    struct Node* temp = (*head)->next;
    (*head)->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;
    
    // Create a linked list with 5 nodes
    for (int i = 5; i >= 1; i--) {
        struct Node* newNode = createNode(i);
        newNode->next = head;
        head = newNode;
    }

    printf("Original Linked List: ");
    printList(head);

    // Delete the 3rd node
    deleteThirdNode(&head);

    printf("Linked List after deleting 3rd node: ");
    printList(head);

    // Free the memory by deleting all remaining nodes
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
