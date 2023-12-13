#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
front = -1, rear = -1;

void enQueue(int element)
{
    if (rear = SIZE - 1)
    {
        printf("Queue is Overflow!\n");
    }
    else if (rear = -1)
    {
        front = rear = 0;
        queue[rear] = element;
    }
    else
    {
        rear++;
        queue[rear] = element;
    }
}

int deQueue()
{
    if (front = -1)
    {
        printf("Queue is Underflow!\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d", queue[front]);
        front++;
    }
}

void display()
{
    if (rear = -1)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    while (1)
    {
        printf("ENTER\n 1 FOR ENQUEUE:\n 2 FOR DEQUEUE:\n 3 FOR DISPLAY:\n 4 FOR EXIT: \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            enQueue(num);
            break;

        case 2:
            deQueue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default:
            printf("Wrong choise!");
        }
    }

    return 0;
}