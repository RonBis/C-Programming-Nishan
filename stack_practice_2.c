#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int top = -1;
int stack[SIZE];

void push(int element)
{
    if (top == SIZE)
    {
        printf("Stack is overflow!!!\n");
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is underflow!!!\n");
    }
    else
    {
        int temp;
        temp = stack[top];
        top--;
        return temp;
    }
}

int peek()
{
    int temp2;
    temp2 = stack[top];
    return temp2;
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int n;
    while (1)
    {
        printf("Enter\n 1 FOR PUSH:\n 2 FOR POP:\n 3 FOR DISPLAY:\n 4 FOR PEEK THE TOP VALUE:\n 5 FOR EXIT:\n");
        scanf("%d", &n);
        switch (1)
        {
        case 1:
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        case 5:
            exit(1);

        default:
            printf("Wrong intput!!!\n");
        }
    }

    return 0;
}