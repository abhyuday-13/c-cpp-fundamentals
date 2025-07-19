#include<stdio.h>
// defining N would be much better option then changing all the values 
#define N 15

int main()
{
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter the input for index %d: ",i);
        scanf("%d",&arr[i]);
    }
        printf("\nArray elements are as follows:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}