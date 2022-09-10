// print 123454321
//        1234321
//         12321
//          121
//           1
#include <stdio.h>

int main() {
  int k;
  for (int i = 1; i <= 5; i++) {
    k = 1;
    for (int j = 0; j <= 9; j++) {
      if (j >= i && j <= 10 - i) {
        printf("%d", k);
        j < 5 ? k++ : k--;
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
