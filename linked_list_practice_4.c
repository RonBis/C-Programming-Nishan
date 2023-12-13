// deletion of nodes in singly linked list
// code with harry
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *deleteNodeAtFirst(nd *head)

{
    nd *ptr = head;
    ptr = (nd *)malloc(sizeof(nd));
    head = head->next;
    free(ptr);
    return head;
}

nd *deleteNodeAtLast(nd *head)

{
    nd *p = head;
    nd *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    free(q);
    p->next = NULL;
    return head;
}

void findAndPrintIndex(nd *head, int item)
{
    nd *current = head;
    int index = 0;
    int found = 0;

    while (current != NULL)
    {
        if (current->data == item)
        {
            found = 1;
            break;
        }
        current = current->next;
        index++;
    }

    if (found)
    {
        printf("Item %d found at Index %d\n", item, index);
    }
    else
    {
        printf("Item %d not found in the linked list\n", item);
    }
}

void checkOddNode(nd *head)
{
    int count = 0;
    nd *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if(count % 2!= 0)
    {
        printf("TOTAL NODES = %d\n", count);
    }
    else
    {
        printf("PLEASE ENTER ONE MORE NODE!");
    }
}

nd *deleteNodeAtAnyIndex(nd *head, int index)

{
    nd *p = head;
    nd *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

void deleteThirdNode(nd *head)
{
    nd *temp = (nd *)malloc(sizeof(nd));
    nd *temp_2 = (nd *)malloc(sizeof(nd));
    temp = head->next->next->next;
    temp_2 = head->next->next;
    temp_2->next = temp->next;
    free(temp);
}

int main()
{
    int n, i;
    nd *head;
    head = NULL;
    nd *newnode, *temp;

    while (1)
    {
        printf("ENTER \n 1 FOR ENTER: \n 2 FOR PRINT: \n 3 FOR DEL 1ST NODE: \n 4 FOR DEL LAST NODE: \n 5 FOR DEL ANY INDEX: \n 6 FOR DEL 3RD NODE: \n 7 FOR FIND ITEM: \n 8 TO CHECH NODES: \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            newnode = (nd *)malloc(sizeof(nd));
            printf("Enter Element For NewNode: ");
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
            printf("\n");
            printf("Start->");
            while (temp != NULL)
            {
                printf("%d->", temp->data);
                temp = temp->next;
            }
            printf("NULL");
            printf("\n");
            break;

        case 3:
            head = deleteNodeAtFirst(head);
            break;

        case 4:
            head = deleteNodeAtLast(head);
            break;

        case 5:
            printf("\n");
            printf("Enter the position of node: ");
            scanf("%d", &i);
            head = deleteNodeAtAnyIndex(head, i);
            break;

        case 6:
            deleteThirdNode(head);
            break;

        case 7:
            int item;
            scanf("%d", &item);
            findAndPrintIndex(head, item);
            break;

        case 8:
        checkOddNode(head);
        break;

        default:
            printf("WRONG INTPUT!\n");
            break;
        }
    }

    return 0;
}