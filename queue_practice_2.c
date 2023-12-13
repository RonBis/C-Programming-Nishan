#include <stdio.h>

#define size 5

int queue[size], front = -1, rear = -1;

void enqueue(int val)
{
  if (rear == size - 1)
  {
    printf("Queue is overflown!");
    return;
  }

  if (front == -1)
  {
    front++;
  }
  rear++;
  queue[rear] = val;
}

int dequeue()
{
  if (front == -1)
  {
    printf("Queue underflown!");
    return NULL;
  }

  front++;
  if (rear < front)
  {
    front = rear = -1;
  }
  return queue[front - 1];
}

void display()
{
  if (front != -1)
  {
    for (int i = front; i <= rear; i++)
    {
      printf("%d\t", queue[i]);
    }
  }
}

int main()
{
  while (1)
  {
    int ch;
    printf("\nEnter choice\n1) Enqueue, 2) Dequeue, 3) Display, 4) Exit\n>> ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
      int val;
      printf("Enter data: ");
      scanf("%d", &val);

      enqueue(val);
      break;
    }
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      printf("Invalid choice!");
    }
  }

  return 0;
}