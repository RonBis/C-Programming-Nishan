// preorder + postorder traversal

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
    nd *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    int x;
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

    printf("ENTER THE LEFT CHILD OF %d: ", x);
    newNode->left = creat();

    printf("ENTER THE RIGHT CHILD OF %d: ", x);
    newNode->right = creat();

    return newNode;
}

void preOrderTraversal(nd *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d\t", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(nd *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d\t", root->data);
    }
}

void inOrder(nd *root)
{
    if (root = NULL)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}

int main()
{
    nd *root;
    root = NULL;
    root = creat();
    printf("-----PREORDER TRAVERSAL-----\n");
    preOrderTraversal(root);
    printf("\n-----POSTORDERTRAVERSAL-----\n");
    postOrderTraversal(root);
    printf("\n-----INORDERTRAVERSAL-----\n");
    inOrder(root);
    return 0;
}
