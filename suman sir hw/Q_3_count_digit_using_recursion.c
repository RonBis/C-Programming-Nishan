#include <stdio.h>
int noOfDigits(int n)
{
  static int count=0;
  if(n!=0)
  {
    count++;
    noOfDigits(n/10);
  }
  return count;
}

int main() {
  int n,count=0;
  printf("Please enter a number: ");
  scanf("%d", &n);
  int result=noOfDigits(n);
  printf("No of digit in your number is: %d\n", result);
  return 0;
}
