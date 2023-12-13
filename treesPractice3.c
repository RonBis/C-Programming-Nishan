#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node nd;

nd *creatNew()
{
    nd *newNode;
    int x;
    newNode = (nd *)malloc(sizeof(nd));
    printf("ENTER THE ELEMENT: ");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    newNode->data = x;
    printf("\nENTER LEFT CHILD OF %d: ", x);
    newNode->left = creatNew();
    printf("\n\t\tENTER RIGHT CHILD OF %d: ", x);
    newNode->right = creatNew();
}
void inOrder(nd *root)
{
    if (root = NULL)
        return 0;
    inOrder(root->left);
    printf("%d", root->data);
    inOrder(root->right);
}

int main()
{
    nd *root;
    root = NULL;
    root = creatNew();
    printf("-----INORDER TRAVERSAL-----\n");
    inOrder(root);
    return 0;
}