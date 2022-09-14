#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("test.txt", "w");
  char ch;
  printf("Please enter your data:\n");
  while ((ch = getchar()) != EOF) {
    putc(ch, fp);
  }
  fclose(fp);

  fp = fopen("test.txt", "r");
  while (((ch = getc(fp)) != EOF)) {
    // printf("%c",ch);
    putc(ch, stdout);
  }
  fclose(fp);

  return 0;
}
