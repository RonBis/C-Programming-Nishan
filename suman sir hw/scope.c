#include<stdio.h>
static int m = 5;
int demoFunction()
{
  //int m=5;
  m++;
  printf("%d\n",m);
}

int main()
{
  m++;
  //m=7;
  printf("%d\n", m);
  demoFunction();
  demoFunction();
  return 0;
}
