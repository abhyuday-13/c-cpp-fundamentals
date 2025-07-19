// C Program To Check Neon Number
// Neon number - a number where the sum of digits of the square of the number is equal to the number

#include <stdio.h>
#include <stdbool.h>

bool IsNeon(int num)
{
    int digit, sum = 0;
    int square = num * num;

    while (square > 0)
    {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

   return (sum == num);
}

int main()
{
    int N;

    printf("Enter any number => ");
    scanf("%d", &N);

    if ( N < 0)
        printf("Please enter a positive number");
    else if (IsNeon(N))
        printf("Yes, %d is Neon Number",N);
    else
        printf("Not a Neon Number");
   
    return 0;
}
