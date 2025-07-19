#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want to reverse: \n");
    scanf("%d", &n);


    int a[n];               // VARIABLE LENGTH ARRAY
    printf("Enter all the %d elements: \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements in reverse order are: \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
    // At the time of execution, we can decide the length of array
    // NO need to choose the fix length while writing the code
    // Even arbitrary expressions are possible
    // Variable length arrays cannot have static storage duration
    // Variable length arrays does not have intializer