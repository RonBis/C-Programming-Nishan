#include <stdio.h>
int a, b;
int swap(int m, int n) // call by value
{
  printf("Adress of m:%p and address of m:%p\n", &m, &n);
  int t = m;
  m = n;
  n = t;
  *(&a) = m;
  *(&b) = n;
}
// void swap(int *p,int *q)//call by reference
// {
//   printf("Adress of m:%p and address of m:%p\n", p, q);
//   int t;
//   t=*p;
//   *p=*q;
//   *q=t;
// }

int main() {

  printf("Please enter value of a and b respectively: ");
  scanf("%d%d", &a, &b);
  printf("Before Swap:\n")
  printf("a=%d,b=%d", a, b);
  printf("Adress of a:%p and address of b:%p\n", &a, &b);
  swap(a, b);
  printf("After Swap:\n");
  printf("a=%d,b=%d", a, b);
  return 0;
}
