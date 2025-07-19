// C Program to Find the Sum of Fibonacci Numbers

#include <stdio.h>

unsigned long long numFib(int num)
{
    unsigned long long a = 0, b = 1, next, sumFib = 0;
    for (int i = 1; i <= num; i++)
    {
        next = a + b;
        sumFib += a;
        a = b;
        b = next;
    }
    return sumFib;
}

int main()
{
    int N;
    printf("Enter number of terms =>");
    scanf("%d", &N);

    printf("Sum of the elements upto %d terms = %llu ", N, numFib(N));

    return 0;
}