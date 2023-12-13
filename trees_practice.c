#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node nd;

nd *creatNode()
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

    printf("ENTER LEFT CHILD OF %d: ", x);
    newNode->left = creatNode();

    printf("ENTER RIGHT CHILD OF %d: ", x);
    newNode->right = creatNode();
    return newNode;
}

void inOrderTraverse(nd *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrderTraverse(root->left);
        printf("%d\t", root->data);
        inOrderTraverse(root->right);
    }
}

int main()
{
    nd *root;
    root = NULL;
    root = creatNode();

    printf("-----INORDER TRAVERSAL-----\n");
    inOrderTraverse(root);
    return 0;
}
