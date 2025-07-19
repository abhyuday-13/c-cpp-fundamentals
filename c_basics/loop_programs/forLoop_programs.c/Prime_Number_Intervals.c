// C Program to Display Prime Numbers Between Intervals

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int initial = 100, final = 138;
    printf("Prime numbers between %d and %d are:\n", initial, final);

    for (int i = initial + 1; i < final; i++)
    {
        if (isPrime(i))
            printf("%d, ", i);
    }
    printf("\b\b \n");
    return 0;
}