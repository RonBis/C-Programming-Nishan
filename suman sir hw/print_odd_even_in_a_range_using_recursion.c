#include <stdio.h>
void oddEven(int start, int end) {
  if (start <= end)
  {
    if (start % 2 == 0)
    {
      printf("%d IS EVEN NUMBER!\n", start);
      oddEven(start+1, end);
    }

    else
    {
      printf("%d IS ODD NUMBER!\n", start);
      oddEven(start + 1, end);
    }
  }
  else
    return;
}
int main() {
  int num1, num2;
  printf("ENTER STARTING NUMBER: ");
  scanf("%d", &num1);
  printf("ENTER ENDING NUMBER: ");
  scanf("%d", &num2);
  oddEven(num1, num2);
  return 0;
}
