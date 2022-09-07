#include <stdio.h>

int gcd(int a, int b);
int main()
{
    int num1, num2;
    printf("ENTER 1ST VALUE: ");
    scanf("%d", &num1);
    printf("ENTER 2ND VALUE: ");
    scanf("%d", &num2);

    printf("GCD OF THESE THREE NUMBER IS: %d", gcd(num1, num2));
    return 0;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
    {
        return a;
    }
    else
        gcd(b, a % b);
}
