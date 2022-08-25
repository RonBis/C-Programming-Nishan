#include <stdio.h>

int main() {
  int choice;
  printf("PLEASE ENTER ANY NUMBER BETWEEN 1 TO 5");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("one\n");
    break;
  case 2:
    printf("2\n");
    break;
  case 3:
    printf("3\n");
    break;
  case 4:
    printf("4\n");
    break;
  case 5:
    printf("5\n");
    break;

  default:
    printf("Wrong Choice");
  }
  // int a=67;
  // nishan: a=a+1;
  // printf("%d\n",a);
  // if (a<1000)
  //   goto nishan;

  return 0;
}
