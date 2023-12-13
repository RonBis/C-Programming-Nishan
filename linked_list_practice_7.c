// insertion of new nodes in doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node nd;

nd *insertNewNodeAtFirst(nd *head)
{
    nd *p;
    p = (nd *)malloc(sizeof(nd));
    printf("ENTER NEW DATA: ");
    scanf("%d", &p->data);
    p->next = head;
    p->prev = NULL;
    return p;
}

nd *insertNewNodeAtLast(nd *head)
{
    nd *p;
    p = (nd *)malloc(sizeof(nd));
    nd *q;
    q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    printf("ENTER NEW DATA: ");
    scanf("%d", &p->data);
    q->next = p;
    p->prev = q;
    p->next = NULL;
    return head;
}

int main()
{
    nd *head;
    head = NULL;
    nd *creatNode, *temp;
    int ch;
    while (1)
    {
        printf("\n ENTER \n 1 FOR INSERT NEW NODE: \n 2 FOR DISPLAY: \n 3 FOR INSERT NEW NODE AT FIRST: \n 4 FOR INSERT NEW NODE AT THE END: ");
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

        case 3:
            head = insertNewNodeAtFirst(head);
            break;

        case 4:
            head = insertNewNodeAtLast(head);
            break;

        default:
            printf("INVALID INTPUT!");
            break;
        }
    }

    return 0;
}