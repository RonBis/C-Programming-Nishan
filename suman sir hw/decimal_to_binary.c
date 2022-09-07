#include <stdio.h>

int main() {
  int num, rem = 0, conv, conv2, rem2 = 0;
  printf("PLS ENTER THE DECIMAL NUMBER: ");
  scanf("%d", &num);
  while (num != 0) {
    conv = num % 2;
    rem = (rem * 10) + conv;
    num = num / 2;
  }
  while (rem != 0) {
    conv2 = rem % 10;
    rem2 = (rem2 * 10) + conv2;
    rem = rem / 10;
  }

  printf("BINARY FORM IS: %d\n", rem2);
  return 0;
}
