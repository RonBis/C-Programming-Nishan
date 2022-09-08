#include <stdio.h>
#include <stdlib.h>
int main() {
  int *arr, size=5,*arr1;
  // printf("ENTER THE SIZE YOU WANT: ");
  // scanf("%d", &size);
  //arr = (int *)calloc(size, sizeof(int));
  arr1 = (int *)malloc(size*sizeof(int));
  for (int i = 0; i < size; i++) {
    printf("ENTER THE VALUES : \n");
    scanf("%d", (arr1 + i));
  }
  for (int i = 0; i < size; i++) {
    printf("THE VALUES AT %d POSITION IS: %d\n", i + 1, *(arr1 + i));
  }
  arr1=(int *)calloc(10,sizeof(int));
for (int i = 5; i < 10; i++)
{
  printf("ENTER THE VALUES : \n");
  scanf("%d", (arr1 + i));
}

  for (int i = 0; i < 10; i++) {
    printf("THE VALUES AT %d POSITION IS: %d\n", i + 1, *(arr1 + i));
  }
  //free(arr);
  free(arr1);
  return 0;
}
