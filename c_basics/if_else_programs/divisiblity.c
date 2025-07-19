//Program to find if a number is divisible by 2
#include<stdio.h>
int main()
{
    int x;
    printf("\nEnter a number=> ");
    scanf("%d",&x);

    if (x%2 == 0)
    {
        printf("True");
    }
    else if (x%2 != 0)
    {
        printf("False");
    }
    
    
    return 0;
}