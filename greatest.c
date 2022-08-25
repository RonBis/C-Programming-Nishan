#include <stdio.h>
int main() {
  int a,b,c;
  printf("PLEASE ENTER THREE NUMBERs");
  scanf("%d %d %d", &a,&b,&c);
 a>b && a>c ? printf("THE GREATEST NUMBER IS %d\n", a): b>c && b>a? printf("THE GREATEST NUMBER IS %d\n", b): printf("THE GREATEST NUMBER IS %d\n", c);


  // if(a>b and a>c)
  // {

  // }
  // else
  // {
  //   if(b>c and b>a)
  //   {

  //   }
  //   else
  //   {

  //   }
  // }

  return 0;
}
