// simple doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node nd;

int main()
{
    nd *head;
    head = NULL;
    nd *creatNode, *temp;
    int ch;
    while (1)
    {
        printf("\n ENTER \n 1 FOR INSERT NEW NODE: \n 2 FOR DISPLAY: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            creatNode = (nd *)malloc(sizeof(nd));
            printf("ENTER THE DATA: ");
            scanf("%d", &creatNode->data);
            creatNode->next = NULL;
            creatNode->prev = NULL;
            if (head == NULL)
            {
                head = temp = creatNode;
            }
            else
            {
                temp->next = creatNode;
                creatNode->prev = temp;
                temp = creatNode;
            }
            break;

        case 2:
            printf("\n");
            printf("Start->");
            temp = head;
            while (temp != NULL)
            {
                printf("<-%d->", temp->data);
                temp = temp->next;
            }
            printf("Null");
            printf("\n");
            break;

        default:
            break;
        }
    }

    return 0;
}