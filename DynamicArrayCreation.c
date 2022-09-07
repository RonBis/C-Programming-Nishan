#include<stdio.h>
#include<stdlib.h>
int main()
{
  // int arr[5];
  int size;
  printf("Enter the size of the array that you want to declare:");
  scanf("%d",&size);
  int *arr;
  arr=(int *)malloc(sizeof(int)*size);//Dynamically created array
  //user input the array
  for(int i=0;i<size;i++)
  {
    printf("Please enter the element at location %d:",i);
    scanf("%d",(arr+i));
  }

  //printitng the user input array
  for (int i = 0; i < size; i++)
  {
    printf("\narr[%d]=%d",i,*(arr+i));
  }
    return 0;
  }
