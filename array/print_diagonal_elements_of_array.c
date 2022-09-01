#include <stdio.h>

int main() {
  int arr[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("ENTER THE VAUES IN %d AND %d POSITIONS: \n", i + 1, j + 1);

      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("\t%d", arr[i][j]);
    }
    printf("\n");
  }
  int arr1[3], arr2[3];
  for (int i = 0; i < 3; i++) {
    arr1[i] = arr[i][i];
    printf("\t%d", arr1[i]);
    printf("\n");
  }

  // for (int j = 0; j < 3; j++) {
  //   arr2[j] = arr[j][j];
  //   printf("\t%d", arr2[j]);
  //   printf("\n");
  // }
  return 0;
}
