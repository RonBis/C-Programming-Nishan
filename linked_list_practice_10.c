//deletion of nodes

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; 
};

typedef struct node nd;

nd *delNodeAtFirst(nd *head)
{
    nd *temp;
    temp = (nd *)malloc(sizeof(nd));
    temp = head->next;
    free(head);
    return temp;
}

nd *delNodeAtLast(nd *head)
{
    nd *p, *q;
    p = head;
    q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main() {
    nd *head, *newNode, *temp;
    head = NULL;
    int ch;
    while(1)
    {
        printf("\n PRESS \n 1 FOR ENTER NEW NODE: \n 2 FOR DELETE NODE: \n 3 FOR PRINT LIST: \n 4 FOR DEL NODE AT LAST: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newNode = (nd *)malloc(sizeof(nd));
            printf("ENTER THE ELEMENT: ");
            scanf("%d", &newNode->data);
            newNode->next = NULL;
            if (head == NULL)
            {
                head = temp= newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            break;
        
        case 2:
            head = delNodeAtFirst(head);
            break;

        case 3:
            temp = head;
            while (temp != NULL)
            {
                printf("%d->", temp->data);
                temp = temp->next;
            }
            break;

        case 4:
            head = delNodeAtLast(head);
            break;

        default:
            break;
        }
    }

  return 0;
}