#include <stdio.h>

int main() {
  int num, count = 0;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);
  while (num != 0) {
    num = num / 10;

    count++;
  }

  printf("NUMBER OF DIGITS ARE: %d\n", count);
  return 0;
}
