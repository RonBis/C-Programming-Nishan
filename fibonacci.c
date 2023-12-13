#include <stdio.h>
int fibNum(int n);
int main()
{
  int n;
  printf("ENTER THE VALUE OF n: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("%ith Fibonaci term: %d\n", i, fibNum(i));
  }

  // printf("YOUR FIBONACCI SERIES IS: %d\n", fibNum(n));
  return 0;
}
int fibNum(int n)
{
  if (n == 1)
  {
    return 0;
  }
  else if (n == 2)
    return 1;
  else
    return fibNum(n - 1) + fibNum(n - 2);
}
