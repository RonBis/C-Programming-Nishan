#include<stdio.h>
int main()
{
  // int a=5;
  // printf("%u\n", &a);
  // printf("Memory Address of a:%p\n", &a);
  // int *p;
  // p=&a;//pointer var holding the address of the a
  // printf("Memory Address of a:%p\n", p);

  // *p=(*p)+2;
  // printf("a=%d",a);
  int a[5]={12,14,1,89,77};
  int *arrPtr;
  arrPtr=&a[0];

  for (int i = 0; i < 5; i++)
  {
    printf("a[%d]=%d\n",i,*(arrPtr+i));
  }


  return 0;
}
