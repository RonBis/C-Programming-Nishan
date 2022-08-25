#include <stdio.h>
void increment(int a)
{
  // a++;
  // printf("\nfrom Increment function:%d", a);
  printf("Adress from increment function %u",&a);
}

int main() {

  int a=5;
  // increment(a);
  // printf("\nfrom Main function:%d", a);
  printf("Adress from Main function %u", &a);
  increment(a);
  return 0;
}
