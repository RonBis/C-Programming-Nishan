#include <stdio.h>
int printArr(int arr[], int start, int end) {
  
  if (start > end) {
    return;
  } else
    printf("%d\n", arr[start]);
  printArr(arr, start + 1, end);
}
int main() {
  int arr[10], count = 0;
  for (int i = 0; i < 10; i++) {
    printf("Enter elements in array: ");
    scanf("%d", &arr[i]);
  }
  printArr(arr, 0, 9);

  return 0;
}
