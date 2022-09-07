// print    *
//         ***
//        *****
//       *******
#include <stdio.h>

int main() {
  int n = 4;
  printf("ENTER NUMBER OF ROWS YOU WANT: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= ((n * 2) - 1); j++) {
      if ((j >= (n - (i - 1))) && (j <= (n + (i - 1)))) {
        printf("*");
      } else
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}
