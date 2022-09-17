#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *ptr;
  int num, arr[20], maxN = 0;
  ptr = fopen("demotext.txt", "r");
  fscanf(ptr, "%d", &num);
  for (int i = 0; i < num; i++) {
    fscanf(ptr, "%d", &arr[i]);
  }
  for (int i = 0; i < num; i++) {
    if (maxN < arr[i]) {
      maxN = arr[i];
    }
  }
  printf("MAX NUMBER IS: %d\n", maxN);

  fclose(ptr);
  return 0;
}
