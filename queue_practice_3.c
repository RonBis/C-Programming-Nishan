// deque implementation

#include <stdio.h>
#define N 10
int queue[N], front = -1, rear = -1;

void insertFromFront(int x)
{
    if (front == 0 && rear == N - 1 || (front = rear + 1))
    {
        printf("QUEUE IS FULL!");
    }
    else if (front == rear == -1)
    {
        front = rear = 0;
        queue[front] = x;
    }
    else if (front == 0)
    {
        front = N - 1;
        queue[front] = x;
    }
    else
    {
        front--;
    }
}

void insertFromRear(int x)
{
    if (front == 0 && rear == N - 1 || (front = rear + 1))
    {
        printf("QUEUE IS FULL!");
    }
    else if (front == rear == -1)
    {
        front = rear = 0;
        queue[front] = x;
    }
    else if (rear = N - 1)
    {
        rear = 0;
        queue[rear] = x;
    }
    else
    {
        queue[++rear] = x;
    }
}

void display()
{
    if (front == rear == -1)
    {
        printf("QUEUE IS EMPTY!");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d", queue[rear]);
    }
}

void deleteFromFront()
{
    if (front == rear == -1)
    {
        printf("QUEUE IS EMPTY!");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == N - 1)
    {
        front = 0;
        printf("%d", queue[front]);
    }
    else
    {
        printf("%d", queue[front]);
        front++;
    }
}

void deleteFromRear()
{
    if (front == rear == -1)
    {
        printf("QUEUE IS EMPTY!");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if(rear == 0)
    {
        printf("%d", queue[front]);
        rear = N-1;
    }
    else
    {
        printf("%d", queue[front]);
        rear--;
    }
}

int main()
{
    insertFromFront(4);
    insertFromFront(5);
    // insertFromRear(10);
    // insertFromRear(12);
    display();
    return 0;
}