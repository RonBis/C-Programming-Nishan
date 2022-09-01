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
  printf("THE TRANSPOSED FORM IS: \n");

  int arrT[3][3];
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      arrT[j][i] = arr[i][j];
      printf("\t%d", arrT[j][i]);
    }
    printf("\n");
  }

  return 0;
}
