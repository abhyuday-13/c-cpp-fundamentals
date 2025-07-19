#include<stdio.h>
int main()
{
    int x;
    printf("\nEnter the number =>");
    
if (scanf("%d", &x) != 1)
    {
        printf("Enter a valid number");
    }
else
{
    if (x>0)
    {
        printf("the number is positive");
    }
    else if (x<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is equal to zero");
    }
} 
    return 0;
}