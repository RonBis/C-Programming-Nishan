#include <stdio.h>

int main() {
  int num, bin_rev = 0, bin_num = 0, rem;
  printf("PLS ENTER A NUMBER: ");
  scanf("%d", &num);

  while (num != 0) {
    rem = num % 2;
    bin_rev = bin_rev * 10 + rem;
    num = num / 2;
  }

// 139 = 11010001
  while(bin_rev != 0) {
    rem = bin_rev % 10;
    bin_num = bin_num * 10 + rem;
    bin_rev = bin_rev / 10;
  }

  printf("binary form is : %d\n", bin_num);

  return 0;
}
