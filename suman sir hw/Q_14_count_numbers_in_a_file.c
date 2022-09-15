#include <stdio.h>

int main() {
  FILE *ptr;
  int count = 1;
  ptr = fopen("demoRead.txt", "r");
  char ch = fgetc(ptr);
  while (ch != EOF) {
    // printf("%c", ch);
    putc(ch, stdout);
    ch = fgetc(ptr);
  }
  printf("\n");
  while (ch != EOF) {
    if (ch == '\n') {
      count++;
    }
  }

  fclose(ptr);
  printf("THE NUMBER OF STATEMENT IS: %d", count++);
  return 0;
}
