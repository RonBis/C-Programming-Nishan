#include <stdio.h>
#include <stdlib.h>
int main() {
  int **arr, row, col;
  printf("ENTER THE SIZE OF ROW: ");
  scanf("%d", &row);
  printf("ENTER THE SIZE OF COLUMN: ");
  scanf("%d", &col);

  arr = (int **)malloc(row * sizeof(int *));

  for (int i = 0; i < row; i++) {
    arr[i] = (int *)malloc(col * sizeof(int));

    for (int j = 0; j < col; j++) {
      printf("ENTER VALUES AT POSITION [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
