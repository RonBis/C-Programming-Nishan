#include <stdio.h>

int main() {
  int arr1[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("pls enter value of %d %d positions\n", i + 1, j + 1);
      printf("ENTER THE VALUES: ");
      scanf("%d", &arr1[i][j]);
    }
  }
  int arr2[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("pls enter value of %d %d positions\n", i + 1, j + 1);
      printf("ENTER THE VALUES: ");
      scanf("%d", &arr2[i][j]);
    }
  }
  int arr3[3][3];
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("pls enter value of %d %d positions\n", i + 1, j + 1);
  //     printf("ENTER THE VALUES: ");
  //     scanf("%d %d", &arr3[i][j]);
  //   }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
      printf("%d\t", arr3[i][j]);
    }
    printf("\n");
    }

  return 0;
}
