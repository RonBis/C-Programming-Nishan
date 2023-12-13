#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a stack structure
struct Stack {
    char data;
    struct Stack* next;
};

// Function to push a character onto the stack
void push(struct Stack** stack, char data) {
    struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));
    newNode->data = data;
    newNode->next = *stack;
    *stack = newNode;
}

// Function to pop a character from the stack
char pop(struct Stack** stack) {
    if (*stack == NULL) {
        printf("Stack underflow\n");
        return '\0'; // Empty character as an error value
    }
    char data = (*stack)->data;
    struct Stack* temp = *stack;
    *stack = (*stack)->next;
    free(temp);
    return data;
}

// Function to return the top character from the stack without popping it
char peek(struct Stack* stack) {
    if (stack == NULL) {
        return '\0'; // Empty character
    }
    return stack->data;
}

// Function to check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to determine the precedence of an operator
int getPrecedence(char c) {
    if (c == '^') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 3;
    return 4; // Default value for parentheses
}

// Function to convert infix expression to postfix
void infixToPostfix(char* infix) {
    struct Stack* operatorStack = NULL;
    int i, j;
    int len = strlen(infix);
    char postfix[len];

    for (i = 0, j = 0; i < len; i++) {
        if (infix[i] == ' ') {
            continue; // Skip whitespace
        } else if (isOperator(infix[i])) {
            while (operatorStack != NULL && getPrecedence(peek(operatorStack)) <= getPrecedence(infix[i])) {
                postfix[j++] = pop(&operatorStack);
            }
            push(&operatorStack, infix[i]);
        } else if (infix[i] == '(') {
            push(&operatorStack, infix[i]);
        } else if (infix[i] == ')') {
            while (operatorStack != NULL && peek(operatorStack) != '(') {
                postfix[j++] = pop(&operatorStack);
            }
            pop(&operatorStack); // Pop the '('
        } else {
            // Operand
            postfix[j++] = infix[i];
        }
    }

    while (operatorStack != NULL) {
        postfix[j++] = pop(&operatorStack);
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
    printf("Infix: %s\n", infix);
    printf("Postfix: %s\n", postfix);
}

int main() {
    char infixExpression[] = "(q+t*v/u/w*)p^o(+r*n-l+k)";
    infixToPostfix(infixExpression);
    return 0;
}
