#include <stdio.h>

int main()
{
    int num,sum, count = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("NUMBER OF DIGIT IS: %d\n", count);
    while (num != 0)
    {
        sum = num / 10;
        sum += sum;
        
    }
    printf("SUM OF DIGIT IS: %d", sum);
    return 0;
}