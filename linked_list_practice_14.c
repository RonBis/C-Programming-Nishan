#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

// Function to find the next greater elements and return a linked list
struct Node* nextGreaterElements(struct Node* head) {
    struct Node* resultHead = NULL;
    struct Node* resultTail = NULL;

    struct Node* current = head;

    while (current != NULL) {
        bool found = false;
        struct Node* temp = current->next;

        while (temp != NULL) {
            if (temp->data > current->data) {
                if (resultHead == NULL) {
                    resultHead = createNode(temp->data);
                    resultTail = resultHead;
                } else {
                    resultTail->next = createNode(temp->data);
                    resultTail = resultTail->next;
                }
                found = true;
                break;
            }
            temp = temp->next;
        }

        if (!found) {
            if (resultHead == NULL) {
                resultHead = createNode(0);
                resultTail = resultHead;
            } else {
                resultTail->next = createNode(0);
                resultTail = resultTail->next;
            }
        }

        current = current->next;
    }

    return resultHead;
}

int main() {
    struct Node* head = NULL;

    // Create a linked list with some elements
    head = createNode(2);
    head->next = createNode(1);
    head->next->next = createNode(3);
    head->next->next->next = createNode(0);
    head->next->next->next->next = createNode(5);
    printf("Original Linked List: ");
    printList(head);

    struct Node* result = nextGreaterElements(head);

    printf("Linked List with Next Greater Elements: ");
    printList(result);

    // Free the memory by deleting all nodes (not shown here).

    return 0;
}
