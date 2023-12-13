#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

void creat_node(nd *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    nd *start;
    nd *second;
    nd *third;
    nd *forth;

    start = (nd *)malloc(sizeof(nd));
    second = (nd *)malloc(sizeof(nd));
    third = (nd *)malloc(sizeof(nd));
    forth = (nd *)malloc(sizeof(nd));

    start->data = 7;
    start->next = second;

    second->data = 11;
    second->next = third;

    third->data = 20;
    third->next = forth;

    forth->data = 59;
    forth->next = NULL;

    printf("\n");
    printf("Start->");
    creat_node(start);
    printf("Null\n");
    printf("\n");

    return 0;
}