// circular queue implementation

#include <stdio.h>
#include <stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = val;
    }
    else if ((rear + 1) % N == front)
    {
        printf("OVERFLOW!");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("UNDERFLOW!");
    }
    else if (front == rear)
    {
        printf("DEQUEUED ELEMENT IS: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("DEQUEUED ELEMENT IS: %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        printf("UNDERFLOW!");
    }
    while( i != rear)
    {
        printf("%d->", queue[i]);
        i = (i+1)%N;
    }
    printf("%d\n", queue[rear]);
}

int main()
{
    // enqueue(5);
    // enqueue(10);
    // enqueue(-1);
    // enqueue(29);
    // enqueue(31);
    // dequeue();
    // dequeue();
    // enqueue(7);
    // enqueue(11);
    // // enqueue(18);
    // display();
    // dequeue();
    // dequeue();
    // enqueue(100);
    // enqueue(120);
    // display();
    // enqueue(33);
    // dequeue();
    // enqueue(99);
    // display();
    // enqueue(20);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
     display();
     enqueue(5);
      display();
    return 0;
}