#include <stdio.h>

int main() {
  int choice;
  printf("PLEASE ENTER ANY NUMBER BETWEEN 1 TO 7");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("MONDAY\n");
    break;
  case 2:
    printf("TUESDAY\n");
    break;
  case 3:
    printf("WEDNESDAY\n");
    break;
  case 4:
    printf("THURSDAY\n");
    break;
  case 5:
    printf("FRIDAY\n");
    break;
  case 6:
    printf("SATDAY\n");
    break;
  case 7:
    printf("SUNDAY\n");
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
