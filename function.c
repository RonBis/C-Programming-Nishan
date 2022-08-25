#include <stdio.h>

//signature defining
// int add(int,int);

// int main() {
//   int a,b;
//   printf("ENTER THE VALUE OF A AND B");
//   scanf("%d %d", &a,&b);
//   int result=add(a,b);
//   printf("\n%d",result);
//   return 0;
// }

// Way2
int add(int m,int n)
{
  return m+n;
  
}
//function body
int main() {
  int a, b;
  printf("ENTER THE VALUE OF A AND B");
  scanf("%d %d", &a, &b);
  int result = add(a, b);
  printf("\n%d", result);
  return 0;
}
