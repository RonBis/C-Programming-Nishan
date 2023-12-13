// stack using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *top = NULL, *newNode, *temp;

nd *push(nd *top, int val)
{
    newNode = (nd *)malloc(sizeof(nd));
    newNode->data = val;
    if (top == NULL)
    {
    newNode->next = NULL;
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
    return top;
}

nd *pop(nd *top)
{
    temp = top;
    if (top == NULL)
    {
        printf("STACK IS UNDERFLOW!");
    }
    else
    {
        top = top->next;
        printf("DELETED DATA IS: %d", top->data);
        free(temp);
    }
    return top;
}

nd *display(nd *top)
{
    if (top == NULL)
        printf("\n STACK IS EMPTY");
    else
    {
        while (temp != NULL)
        {
            printf("\n %d", temp->data);
            temp = temp->next;
        }
    }
    return top;
}

int main()
{
    int ch, data;
    while (1)
    {
        printf("\n ENTER \n 1 TO PUSH: \n 2 TO POP: \n 3 FOR DISPLAY: \n");
        scanf("%d", ch);
        switch (ch)
        {
        case 1:

            printf("ENTER AN ELEMENT: ");
            scanf("%d", &data);
            top = push(top, data);
            break;

        case 2:
            top = pop(top);
            break;

        case 3:

            top = display(top);
            break;

        default:
            break;
        }
    }

    return 0;
}