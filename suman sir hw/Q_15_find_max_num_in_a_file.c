#include <stdio.h>

int main() {
  FILE *ptr;
  int num, maxN = 0;
  ptr = fopen("maxNumber.txt", "r");
  fscanf(ptr, "%d", &num);
  while ((num = getc(ptr)) != EOF) {
    putc(ptr, stdout);
  }
  while ((num = getc(ptr)) != EOF) {
    if (maxN < num) {
      maxN = num;
      putc(maxN, stdout);
    }
  }

  fclose(ptr);
  return 0;
}
