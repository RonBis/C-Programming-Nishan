// print *
//       **
//       ***`
//       ****
#include <stdio.h>

int main() {
  int n;
  printf("ENTER NUMBER OF ROWS YOU WANT: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("*");
      } else
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}
