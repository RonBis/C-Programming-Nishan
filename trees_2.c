// how to make creat function and inorder travelsal

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left; 
    struct node *right;
};

typedef struct node nd;

nd *creat()
{
    int x;
    nd *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    printf("\nENTER THE VALUE: ");
    scanf("%d", &x);

    if (x == -1)
    {
        return NULL;
    }
    else
    {
        newNode->data = x;
    }

    printf("ENTER VALUE FOR LEFT CHILD OF %d: ", x);
    newNode->left = creat();

    printf("ENTER VALUE FOR RIGHT CHILD OF %d: ", x);
    newNode->right = creat();
    return newNode;
}

void inorderTraversal(nd *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d->", root->data);
    inorderTraversal(root->right);
}

int main()
{
    nd *root;
    root = NULL;
    root = creat();

    printf("\n----------INORDER TRAVERSAL----------\n");
    inorderTraversal(root);

    return 0;
}