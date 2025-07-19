#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number =>");
    scanf("%d",&n);
    int cnt = 0;

    if (n <= 1)
        printf("%d is NOT a prime number", n);
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                cnt++;
        }
        if (cnt > 2)
            printf("%d is NOT a prime\n", n);
        else
            printf("%d is a prime", n);
    }
    return 0;
}