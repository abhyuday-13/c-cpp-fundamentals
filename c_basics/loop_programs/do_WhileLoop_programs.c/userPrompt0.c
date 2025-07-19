#include<stdio.h>
int main()
{
    int n = 1,sum = 0;
    printf("Input series of numbers and use 0 to stop.\n");
    while (n != 0)
    {
        printf("Input a number =>");
        scanf("%d",&n);
        sum += n;
    }   
    printf("Sum = %d",sum);
    return 0;
}