//Program from geeksforgeeks website ( To compare with my program and learn about boolean)
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int N)
{
    int temp = N;
    double sum = 0;
    int count = log10(temp) + 1;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return (sum == N);
}

int main()
{
    int N = 153;

    if (isArmstrong(N))
        printf("Yes\n");
    else
    {
        printf("No\n");
    }
    return 0;
}