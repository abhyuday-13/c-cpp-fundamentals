// Prime number upto N terms
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < sqrt(n); i++)
    // The reason we only check up to the square root of n is that if n is divisible 
    // by any number greater than its square root, it must also be divisible by a smaller number.
    {
        if (n % i == 0)
            return false;
    }
    return true;
    /*This way, if the condition n % i == 0 is true for any i in the loop, 
    we know that n has a divisor other than 1 and itself, making it composite (not prime). 
    If the loop completes without finding such a divisor, then n is prime, 
    and the function returns true.*/
}

/*int isPrime(int n)
{
    if (n <= 1) 
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
        return 1;
}
*/

int main()
{
    int N;
    printf("Enter number of terms =>");
    scanf("%d",&N);

    printf("Prime numbers upto %d are :\n", N);
    for (int i = 1; i <= N; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}