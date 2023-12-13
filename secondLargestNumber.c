// in a given array find the second largest element
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[100];
    int n;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("ENTER %dTH NUMBER: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("SECOND LARGEST NUMEBR IS: %d\n", arr[n - 2]);
        break;
    }

    return 0;
}