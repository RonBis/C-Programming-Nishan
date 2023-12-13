// circular linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

int main()
{
    nd *head;
    head = NULL;
    nd *newNode, *temp;
    int ch;
    while (1)
    {
        printf("\n ENTER\n 1 FOR INSERT NEW NODE: \n 2 FOR DISPLAY: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newNode = (nd *)malloc(sizeof(nd));
            printf("ENTER THE VALUE: ");
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if (head == NULL)
            {
                head = temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            temp->next = head;
            break;

        case 2:
            printf("\n");
            printf("Start->");
            if (head == NULL)
            {
                printf("INVALID!");
            }
            else
            {
                temp = head;
                while (temp->next != head)
                {
                    printf("%d->", temp->data);
                    temp = temp->next;
                }
            }

            printf("%d->", temp->data);
            printf("Null");
            printf("\n");

            break;

        default:
            printf("INVALID INTPUT!");
            break;
        }
    }

    return 0;
}