// print    1
//         121
//        12321
//       1234321
#include <stdio.h>

int main()
{
    int n;
    printf("ENTER NUMBER OF ROWS YOU WANT: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= (n * 2) - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("%d", k);
                j < n ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
