#include <stdio.h>
int power(int x, int z) {
  if (z == 0) {
    return 1;
  } else {
    return x * power(x, z - 1);
  }
}
int main() {
  int num, pow;
  printf("ENTER THE NUMBER: ");
  scanf("%d", &num);
  printf("ENTER POWER: ");
  scanf("%d", &pow);
  int result = power(pow, num);
  printf("FINAL RESULT IS: %d\n", result);
  return 0;
}
