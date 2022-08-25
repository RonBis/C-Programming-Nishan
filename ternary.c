#include <stdio.h>
#include<stdbool.h>
int main(){
	// int a,b,c;
	// printf("ENTER THE THREE NUMBER ");
	// scanf("%d %d %d",&a,&b,&c);
	// if(a>b && a>c){
	// 	printf("THE GREATEST NUMBER IS %d\n", a);
	// }
	// else if(b>c){
	// 	printf("THE GREATEST NUMBER IS %d\n", b);
	// }
	// else{
	// 	 printf("THE GREATEST NUMBER IS %d\n", c);
	// }
  int age;
  printf("PLEASE ENTER YOUR AGE");
  scanf("%d", &age);
  bool f;
  //Ternary Operator shortcut for if else
  //(condition)?ifTruedoJob:elsedoJob;
  int r=age > 17 ? printf("NISHAN"):printf("You are not eligible:");
  printf("\n%d", r);
  // if(f)
  // {
  //   printf("You are eligible:");
  // }
  // else
  // {
  //   printf("You are not eligible:");
  // }
	return 0;
}
