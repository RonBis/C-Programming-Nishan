#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int size;
    printf("SIZE: ");
    scanf("%d", &size);
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", (arr + i));
    }
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = (i + 1); j < size; j++)
        {
            // int minIndex = i;
            if (arr[j] < arr[minIndex])
            {
                swap(arr + j, arr + minIndex);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
}