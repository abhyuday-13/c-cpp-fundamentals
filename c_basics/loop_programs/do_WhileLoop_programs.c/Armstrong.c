#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, count, digit, sum = 0;
    printf("Enter any number =>");
    scanf("%d", &num);
    double power;
    count = log10(num) + 1;

    originalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        power = pow(digit, count);
        sum += power;
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number", sum);
    else
        printf("%d is not an Armstrong number", originalNum);

    return 0;
}