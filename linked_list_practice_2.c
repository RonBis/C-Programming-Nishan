// simple singly linked list
// jenny's lecture
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

//  //Definition for singly-linked list.
//   struct node {
//       int val;
//       struct node *next;
//  };

// typedef struct node nd;
nd *hasCycle(nd *head)
{
    nd *ptr = head;
    nd *temp = head->next;

    if (temp == NULL)
    {
        printf("0");
        return false;
    }
    else
    {
        ptr = ptr->next;
        head = head->next;
        printf("1");
        return true;
    }
}

nd *middleNode(nd *head)
{
    nd *ptr = head;
    nd *ptr2 = head;
    while (ptr2 != NULL && ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next->next;
    }
    printf("MIDDLE NODE IS: %d\n", ptr->data);
    return ptr;
}

int main()
{
    nd *head;
    head = NULL;
    nd *newNode, *temp;
    int ch;
    int count = 0;
    while (1)
    {
        printf("Enter\n 1 For New Node:\n 2 For Print the list:\n 3 For print the count: \n 4 TO CHECK IT LINKED LIST CAN FORM A CYCLE OR NOT: \n 5 TO FIND MIDDLE NODE: \n");
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
            printf("%d\n", count);
            break;

        case 4:
            head = hasCycle(head);
            break;
        case 5:
            head = middleNode(head);
            break;
        default:
            printf("Wrong intput!");
        }
    }

    return 0;
}