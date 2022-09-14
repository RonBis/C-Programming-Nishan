#include <stdio.h>

int main() {
  char s[100];
  printf("ENTER YOUR NAME: ");
  scanf("%s", s);
  gets(s);
  puts(s);
  printf("YOUR NAME IS: %s\n", s);
  return 0;
}
