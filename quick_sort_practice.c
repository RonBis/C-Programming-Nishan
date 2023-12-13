#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int firstIndex, int lastIndex)
{
    int pivot = arr[lastIndex];
    int i = (firstIndex - 1);
    for (int j = firstIndex; j <= (lastIndex - 1); j++)
    {
        if (arr[j] <= pivot)
        {
            i = i + 1;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[lastIndex]);
    return (i + 1);
}

void sort(int arr[], int firstIndex, int lastIndex)
{
    if (firstIndex < lastIndex)
    {
        int middleIndex = partition(arr, firstIndex, lastIndex);
        sort(arr, firstIndex, middleIndex - 1);
        sort(arr, middleIndex + 1, lastIndex);
    }
}

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &array[i]);
    }

    sort(array, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}