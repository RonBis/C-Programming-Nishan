#include <stdio.h>

int main()
{
    int a[100][100], row, col;
    printf("ENTER VAL FOR ROWS AND COLUMNS: ");
    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ENTER VALUE FOR [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("ROW\tCOL\tDATA\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != 0)
            {
                printf("%d\t%d\t%d\n", i+1, j+1, a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}