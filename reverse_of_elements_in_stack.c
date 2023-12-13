#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int tos = -1;

void push(int element)
{
  if (tos == SIZE)
  {
    printf("Stack is overflow!");
  }
  else
  {
    tos++;
    stack[tos] = element;
  }
}

void pop()
{
  if (tos == -1)
  {
    printf("Stack is underflow!\n");
  }
  else
  {
    int t = stack[tos];
    tos--;
    return t;
  }
}

int main()
{
  int *stack;
  stack = (int *)malloc(SIZE * sizeof(int));
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter elements in position no. %d: ", i + 1);
    scanf("%d", (stack + i));
  }
  int n;
  while (1)
  {
    printf("Press 1 for Push : 2 for Pop\n");
    switch (n)
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

        default:
        break;
      }
  }

  return 0;
}