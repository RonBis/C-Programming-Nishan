#include <stdio.h>
int add(int a,int b)
{
  return a+b;
}
int main() {
  int m,n;
  printf("Please enter two values:");
  scanf("%d%d",&m,&n);
  int(*fp)(int,int);//declaring a function pointer to point to a particular function
  fp=add;//assigning pointer to point the allocated function
  int result=(*fp)(m,n);//calling the function using pointer
  printf("Result=%d",result);

  return 0;
}
