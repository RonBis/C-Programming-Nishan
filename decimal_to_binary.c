#include <stdio.h>
#include <time.h>

int main() {
  int num, bin_rev = 0, bin_num = 0, rem;
  printf("PLS ENTER A NUMBER: ");
  scanf("%d", &num);

  struct timespec ts;
  timespec_get(&ts, TIME_UTC);

  while (num != 0) {
    rem = num % 2;
    bin_rev = bin_rev * 10 + rem;
    num = num / 2;
  }

  while(bin_rev != 0) {
    rem = bin_rev % 10;
    bin_num = bin_num * 10 + rem;
    bin_rev = bin_rev / 10;
  }

  struct timespec ts2;
  timespec_get(&ts2, TIME_UTC);
  printf("%09ld\n\n", ts2.tv_nsec - ts.tv_nsec);

  // printf("binary form is : %d\n", bin_num);

  return 0;
}
