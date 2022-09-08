#include <stdio.h>
#include <stdlib.h>
int main() {
  int *ptr, size, maxN = ptr[0], minN;
  ptr = (int *)malloc(size * sizeof(int));
  printf("ENTER THE SIZE OF ARRAY YOU WANT: ");
  scanf("%d", &size);
  for (int i = 0; i < size; i++) {
    printf("ENTER THE VALUES IN %dth POSITION: ", i + 1);
    scanf("%d", (ptr + i));
  }
  for (int i = 0; i < size; i++) {
    if (maxN < *(ptr + i)) {
      maxN = *(ptr + i);
    }
  }
  minN = *(ptr + 0);
  for (int i = 0; i < size; i++) {
    if (minN > *(ptr + i)) {
      minN = *(ptr + i);
    }
  }
  printf("YOUR MAX NUM IS: %d\n", maxN);
  printf("YOUR MIN NUM IS: %d\n", minN);
  return 0;
}
