/* Binary Search is an interval searching algorithm that searches for an item in the sorted list.
It works by repeatedly dividing the list into two equal parts and
then searching for the item in the part where it can possibly exist.
Conditions =>
        The list must be sorted.
        Random access to the list members. */

#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        if (arr[mid] > key)
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 15, 18, 33, 96};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 15;
    int result = binarySearch(arr, size, key);
    printf("Element is at index %d", result);
    return 0;
}