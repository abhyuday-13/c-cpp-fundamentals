#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number=>");
    scanf("%d",&num);
    
    //(num%5==0 && num%11==0)? printf("It is divisible") : printf("It is NOT divisible");
    if (num%5 == 0 && num%11 == 0)
    {
        printf("It is divisible");
    }
    else{
        printf("Not divisible");
    }
    return 0;
}