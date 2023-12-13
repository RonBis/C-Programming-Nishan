#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE]; 
int tos = -1;

void push(int number)
{
    if (tos == SIZE)
    {
        printf("Stack overflow!");
    }
    else
    {
        // tos++;
        // stack[tos] = number;
        stack[++tos] = number;
    }
}

void pop()
{
    if (tos==-1)
    {
        printf("Stack is enderflow!");
    }
    else
    {
        int t = stack[tos];
        tos--;
        return t;
    }
}
    
void display()
    {
        for (int i = tos; i >=0 ; i--)
        {
            printf("%d\n", stack[i]);
        }

    }

int main()
    {
        int n;
        while (1)
        {
            printf("Enter 1 for push \n");
            printf("Enter 2 for display \n");
            printf("Enter 3 for pop \n");
            scanf("%d", &n);
            switch (n)
            {
                case 1:
                int num;
                printf("ENTER THE ELEMENTS: \n");
                scanf("%d", &num);
                printf("\n");
                push(num);
                break;

                case 2:
                display();
                break;

                case 3:
                pop();
                break;

                default:
                printf("Wrong intput!\n");
                break;

            }
        }
        return 0;
    }

   
