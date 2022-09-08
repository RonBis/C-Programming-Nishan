// print odd elements location in a dynamicaly array
#include <stdio.h>
#include <stdlib.h>
int main() {
  int *arr, size;
  arr = (int *)malloc(size * sizeof(int));
  printf("INPUT SIZE OF ARRAY: ");
  scanf("%d", &size);
  for (int i = 0; i < size; i++) {
    printf("ENTER THE ELEMENTS IN %dTH POSITIONS: ", i + 1);
    scanf("%d", (arr + i));
  }
  for (int i = 0; i < size; i++) {
    if (*(arr + i) % 2 != 0) {
      printf("POSITION OF %d ELEMENT IS: %d\n", *(arr + i), i);
    }
  }
  free(arr);
  return 0;
}
