// Reverse a linkedlist

// prev,next=NULL
// curr=head
// while(curr!=NULL)
// {
//     next=curr->next;
//     current->next=prev;
//     prev=curr;
//     curr=next;
// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *head=NULL, *newNode, *temp;

nd *reverse(nd *head)
{
    nd *prev = NULL, *cur = head, *nextu = NULL;
    while (cur != NULL)
    {
        nextu = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextu;
    }
    return prev;
}

int main()
{

    int ch;
    int count = 0;
    while (1)
    {
        printf("Enter\n 1 For New Node:\n 2 For Print the list:\n 3 R   everse the list: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newNode = (nd *)malloc(sizeof(nd));
            printf("Enter the data: ");
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
            break;

        case 2:
            temp = head;
            printf("\n");
            printf("Start->");
            while (temp != NULL)
            {
                printf("%d->", temp->data);
                temp = temp->next;
                count++;
            }
            printf("Null\n");
            printf("\n");
            break;

        case 3:
            head = reverse(head);
            break;

            return 0;
        }
    }
}