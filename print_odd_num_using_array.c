#include <stdio.h>

int main() {
  int arr[10], i;
  for ( i = 0; i < 10; i++)
  {
    printf("ENTER NUMBERS IN %d INDEX: ", i+1);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++){
   if (arr[i]%2!=0){
    printf("YOUR GIVEN %d VALUE IS ODD \n", arr[i]);
   }
else
     printf("YOUR GIVEN %d VALUE IS EVEN\n", arr[i]);
  }
return 0;
}
