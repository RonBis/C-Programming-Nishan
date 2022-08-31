#include <stdio.h>

int main() {
  int arr[5], i, maxN=0,minN;
  for (i = 0; i < 5; i++)
  {
    printf("ENTER NUMBERS IN %d INDEX: ", i + 1);
    scanf("%d", &arr[i]);
    // 5,20,100,34,67
  }
  for (i = 0; i < 5; i++) {
    if (maxN < arr[i]) {
      maxN = arr[i];
    }
  }
  for (i = 0; i < 5; i++) {
    if (minN > arr[i]) {
      minN = arr[i];
    }
  }
  printf("YOUR MAX ELEMENT IS: %d\n", maxN);
  printf("YOUR MIN ELEMENT IS: %d\n", minN);
  return 0;
}
