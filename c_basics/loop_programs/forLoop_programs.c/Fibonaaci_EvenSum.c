// C Program to Find the Sum of Fibonacci Numbers at Even Indexes up to N Terms
// INPUT = 5
// OUTPUT = 0+1+3+8+21+55 = 88

#include <stdio.h>
int fibSum(int n)
{
    int next, sum = 0, a = 0, b = 1;

    for (int i = 0; i <= 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            sum += a;
            printf("%d, ", a);
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("\b\b \n");

    return sum;
}
int main()
{
    int N;
    printf("Enter number of terms =>");
    scanf("%d", &N);
    printf("Sum = %d", fibSum(N));

    return 0;
}