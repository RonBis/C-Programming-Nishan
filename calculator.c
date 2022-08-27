#include <stdio.h>

float addtion(float x, float y) { return (x + y); }
float substraction(float x, float y) { return (x - y); }
float multiplication(float x, float y) { return (x * y); }
float division(float x, float y) { return x / y; }

float calc(int choice) {
  float n1, n2;
  printf("ENTER THE VALUE OF FIRST NUMBER: ");
  scanf("%d", &n1);
  printf(" ENTER THE VALUE OF SECOND NUMBER: ");
  scanf("%d", &n2);

  switch (choice) {
  case 1:
    return addtion(n1, n2);
  case 2:
    return substraction(n1, n2);
  case 3:
    return multiplication(n1, n2);
  case 4:
    return division(n1, n2);
  }
}

int main() {
  int a, b, ch;

  printf(" PLEASE ENTER 1 FOR ADDITION; 2 FOR SUBSTRACTION; 3 FOR "
         "MULTIPLICATION : ");
  scanf("%d", &ch);

  if (ch >= 1 && ch <= 4) {
    printf("The required result is: %.3f", calc(ch));
  } else {
    printf("Invalid choice");
  }

  return 0;
}
