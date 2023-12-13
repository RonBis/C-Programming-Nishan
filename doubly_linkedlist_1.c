#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node nd;


int main() {
nd *head, *newNode, *temp;
head = NULL;
int ch;
while (1)
{
  printf("\n ENTER \n 1 FOR INPUT: \n 2 FOR OUTPUT: \n");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    newNode = (nd *)malloc(sizeof(nd));
    printf("ENTER ELEMENT: ");
    scanf("%d", &newNode->data);
    newNode->left =  NULL;
    newNode->right = NULL;
    if (head == NULL)
    {
      head =temp= newNode;
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

  default:
    break;
  }
}



  return 0;
}