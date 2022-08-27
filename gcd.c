#include <stdio.h>

int gcd(int, int);
int main() {

  int a, b;
  printf("ENTER TWO NUMBER: ");
  scanf("%d %d", &a, &b);
  printf("GCD IS: %d", gcd(a, b));

  return 0;
}
int gcd(int a, int b) {
  if (a == 0) {
    return b;
  } else if (b == 0) {
    return a;
  } else
    gcd(b, a % b);
}
