#include <stdio.h>
int sum(int n);
int main() {
  int n;
  printf("ENTER THE VALUE OF n: ");
  scanf("%d", &n);
  printf("SUM OF n NUMBER IS: %d", sum(n));
  return 0;
}
int sum(int n)

{
  if (n == 1 || n==0) {
    return n;

  } else
    return (n + sum(n - 1));

}
