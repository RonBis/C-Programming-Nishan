#include <stdio.h>
#include <stdlib.h>
int main() {
  int *ptr, sum = 0, size;
  ptr = (int *)malloc(size * sizeof(int));
  printf("ENTER NUMBER OF ELEMENTS YOU WANT: ");
  scanf("%d", &size);
  for (int i = 0; i < size; i++) {
    printf("ENTER %dth  number: ", i + 1);
    scanf("%d", &ptr[i]);
  }
  // sum = ptr[0] + ptr[1] + ptr[2] + ptr[3] + ptr[4];
  for (int i = 0; i < size; i++) {
    sum = sum + ptr[i];
  }

  printf("SUM OF ALL THE NUMBERS IS: %d\n", sum);

  return 0;
}
