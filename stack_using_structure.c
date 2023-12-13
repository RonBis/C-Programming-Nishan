#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    int *arr;
    int size;

} s1;

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    s1.top = -1;
    s1.size = 5;
    s1.arr = (int *)malloc(s1.size * sizeof(int));

    // s1.arr[0] = 5;
    // s1.top++;

    

    if (isEmpty(&s1))
    {
        printf("It's empty\n");
    }
    else
    {
        printf("It's not empty!\n");
    }

   
    return 0;
}