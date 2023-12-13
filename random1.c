#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack of given capacity
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element into the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;

    *(stack->array + (++stack->top)) = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;

    return *(stack->array + (stack->top--));
}

// Function to convert decimal number to binary using a pointer-based stack
void decimalToBinary(int decimalNum) {
    struct Stack* binaryStack = createStack(MAX_SIZE);

    while (decimalNum > 0) {
        push(binaryStack, decimalNum % 2);
        decimalNum /= 2;
    }

    printf("Binary representation: ");

    while (!isEmpty(binaryStack)) {
        printf("%d", pop(binaryStack));
    }
}

int main() {
   int decimalNum;

   printf("Enter a decimal number: ");
   scanf("%d", &decimalNum);

   decimalToBinary(decimalNum);

   return 0;
}