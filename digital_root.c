#include <stdio.h>

// 8956

int calculate_root(int number) {
  int r, sum = 0;

  while (number != 0) {
    r = number % 10;
    sum = sum + r;
    number = number / 10;
  }

  if (sum / 10 == 0) {
    return sum;
  }
  calculate_root(sum);
}

int main() {
  int number;

  printf("Enter any number : ");
  scanf("%d", &number);

  printf("The digital root is: %d", calculate_root(number));

  return 0;
}
