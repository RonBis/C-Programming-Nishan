#include <stdio.h>
void naturalNum(int n);
int main() {
  int n;
  printf("PLS ENTER THE RANGE YOU WANT: ");
  scanf("%d", &n);
  naturalNum(n);
  return 0;
}
void naturalNum(int n) {
  if (n) {
    naturalNum(n - 1);
  } else
    return;
  printf("%d\n", n);
  printf("\n");
}
