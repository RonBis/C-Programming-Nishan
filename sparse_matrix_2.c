#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node
{
    int data;
    int row;
    int col;
    struct Node *next;
};

// Function to insert a node at the end of the linked list
void insert(struct Node **head, int data, int row, int col)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->row = row;
    new_node->col = col;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

// Function to display the linked list representation of the sparse matrix
void display(struct Node **rows, int num_rows, int num_cols)
{
    for (int i = 0; i < num_rows; i++)
    {
        struct Node *current = rows[i];
        for (int j = 0; j < num_cols; j++)
        {
            if (current && current->col == j)
            {
                printf("%d\t", current->data);
                current = current->next;
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}};

    int num_rows = 4;
    int num_cols = 5;

    struct Node *rows[num_rows];
    for (int i = 0; i < num_rows; i++)
    {
        rows[i] = NULL;
    }

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                insert(&rows[i], matrix[i][j], i, j);
            }
        }
    }

    printf("Linked list representation of the sparse matrix:\n");
    display(rows, num_rows, num_cols);

    return 0;
}
