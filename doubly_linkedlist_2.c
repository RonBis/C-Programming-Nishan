// insert nodes at beginning, end , specifit position

#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node nd;
nd *head, *newNode, *temp;

nd *insert_at_beginning(nd *head)
{
    // nd *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    printf("ENTER THE VAL: ");
    scanf("%d", &newNode->data);
    newNode->left = NULL;
    newNode->right = NULL;
    head->left = newNode;
    newNode->right = head;
    head = newNode;
    return head;
}

nd *insert_at_end(nd *head)
{
    // nd *ptr, *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    printf("ENTER THE VAL: ");
    scanf("%d", &newNode->data);
    temp = head;
    // newNode->left = NULL;
    // newNode->right = NULL;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    newNode->left = temp;
    temp->right = newNode;
    newNode->right = NULL;
    return head;
}

int main()
{
    int ch;
    head = NULL;
    while (1)
    {
        printf("\n PRESS \n 1 FOR ENTER NEW NODE: \n 2 FOR PRINT LIST:\n 3 FOR INSERT NODE AT BEGINNING: \n 4 FOR INSERT AT END: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newNode = (nd *)malloc(sizeof(nd));
            printf("ENTER THE VAL: ");
            scanf("%d", &newNode->data);
            newNode->left = NULL;
            newNode->right = NULL;
            if (head == NULL)
            {
                head = temp = newNode;
            }
            temp->right = newNode;
            newNode->left = temp;
            temp = newNode;
            break;

        case 2:
            temp = head;
            while (temp != NULL)
            {
                printf("%d->", temp->data);
                temp = temp->right;
            }

            break;

        case 3:
            head = insert_at_beginning(head);
            break;

        case 4:
            head = insert_at_end(head);
            break;

        default:
            printf("wrong input!");
            break;
        }
    }
    return 0;
}