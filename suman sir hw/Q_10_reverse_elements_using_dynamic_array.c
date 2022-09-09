#include <stdio.h>
#include <stdlib.h>
int reverse(int *arr, int size) {
  int temp;
  for (int i = 0; i < (size / 2); i++) {
    temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }
}
int main() {
  int size, *arr;
  printf("ENTER THE SIZE YOU WANT: ");
  scanf("%d", &size);
  arr = (int *)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    printf("ENTER ELEMENTS AT %d POSITION: ", i + 1);
    scanf("%d", (arr + i));
  }
  reverse(arr, size);
  for (int i = 0; i < size; i++) {
    printf("NOW NEW VALUE AT %d POSITION IS: %d\n", i + 1, *(arr + i));
  }

  return 0;
}
