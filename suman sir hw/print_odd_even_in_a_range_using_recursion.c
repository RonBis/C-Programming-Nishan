#include <stdio.h>
void oddEven(int num, int n);
int main() {
  int n;
  printf("ENTER A VALUE FOR UPPER RANGE: ");
  scanf("%d", &n);
  printf(" EVEN NUMBERS FROM 1 TO %d IS: %d\n", n);
  oddEven(2, n);
  printf(" ODD NUMBERS FROM 1 TO %d IS: %d\n", n);
  oddEven(1, n);
  return 0;
}
void oddEven(int num, int n) {
  if (num > n) {
    return;
    printf("%d", num);
    oddEven(num + 2, n);
  }
}
