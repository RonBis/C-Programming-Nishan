#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("IT IS A PRIME NUMBER!");
    }
    else
    {
        printf("IT IS NOT A PRIME NUMBER!");
    }
    return 0;
}