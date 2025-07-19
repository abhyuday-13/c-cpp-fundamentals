#include <stdio.h>
int main()
{
    int num, firstDigit, lastDigit, sum = 0;
    printf("Enter any five digit number =>");
    scanf("%d", &num);

    if ( num < 10000 || num > 99999){
        printf("Invalid input!");
        return 1;
    }
    
    lastDigit = num % 10;
    
    while (num >= 10)
    {
        num = num / 10;
    }

    firstDigit = num;

    sum = firstDigit + lastDigit;
    
    printf("Sum of %d and %d is %d",firstDigit,lastDigit,sum);

    return 0;
}