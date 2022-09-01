#include <stdio.h>

int main() {
  int arr1[3][3], arr2[3][3], arrM[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" ENTER THE VALUES IN [%d][%d] POSITIONS: ", i + 1, j + 1);
      scanf("\t%d", &arr1[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" ENTER THE VALUES IN [%d][%d] POSITIONS: ", i + 1, j + 1);
      scanf("\t%d", &arr2[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      arrM[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        arrM[j][k] += arr1[j][k] * arr2[k][j];
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("\t%d", arrM[i][j]);
    }
    printf("\n");
  }

  return 0;
}
