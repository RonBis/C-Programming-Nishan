#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

void insertNewNode(int x)
{
    nd *new = (nd *)malloc(sizeof(nd));
    new->data = x;
    new->next = NULL;
    return new;
}

int main()
{

    nd *head;
    head = NULL;
    nd *newnode, *temp;
    int ch, count = 0;
    while (1)
    {
        printf("ENTER \n 1 FOR ENTER ELEMENT: \n 2 FOR PRINT: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (nd *)malloc(sizeof(nd));
            printf("ENTER THE ELEMENT: ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;

            if (head == NULL)
            {
                head = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            break;

        case 2:

            temp = head;
            {

                while (temp != NULL)
                {
                    printf("%d->", temp->data);
                    temp = temp->next;
                }
            }
            printf("%d", count);
            break;
        default:
            printf("WRONG INPUT!");
            break;
        }
    }

    return 0;
}