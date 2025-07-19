#include <stdio.h>

int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int a[] = {1, 4, 5, 7, 8, 88, 43, 55, 21};

    int size = sizeof(a) / sizeof(a[0]);

    printf("Largest element in the given array is %d", findMax(a, size));

    return 0;
}