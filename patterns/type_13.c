// print *         *
//       **       **
//       ***     ***
//       ****   ****
//       ***** *****
//       ***********
//       ***** *****
//       ****   ****
//       ***     ***
//       **       **
//       *         *
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            if (j <= i || j >= 12 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 7; i <= 11; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            if (j <= 12 - i || j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
