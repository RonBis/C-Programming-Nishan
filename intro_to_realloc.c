#include <stdio.h>
#include <stdlib.h>
int main() {
  int *arr, size, modified_Size;
  printf("ENTER THE SIZE YOU WANT: ");
  scanf("%d", &size);
  arr = (int *)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    printf("ENTER THE VALUES : \n");
    scanf("%d", (arr + i));
  }
  printf("ENTER THE NEW SIZE YOU WANT: ");
  scanf("%d", &modified_Size);
  arr = realloc(arr, modified_Size * sizeof(int));
  for (int i = 5; i < modified_Size; i++) {
    printf("ENTER THE VALUES : \n");
    scanf("%d", (arr + i));
  }
  // printing the input Array
  for (int i = 0; i < modified_Size; i++) {
    printf("THE VALUES AT %d POSITION IS: %d\n", i + 1, *(arr + i));
  }
  free(arr);

  return 0;
}
