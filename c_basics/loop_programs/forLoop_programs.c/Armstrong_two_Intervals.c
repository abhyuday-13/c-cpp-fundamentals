#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isArmstrong(int num)
{
    int OriginalNum, digit, count;
    double sum = 0;

    count = log10(num) + 1;
    OriginalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        sum += pow(digit, count);
        num /= 10;
    }

    if (sum == OriginalNum)
        return true;
    else
        return false;
}

int main()
{
    int intial = 100, final = 2000;

    printf("Armstrong numbers between %d and %d are: ",intial,final);

    for (int i = intial; i < final; i++)
    {
        if (isArmstrong(i))
            printf("%d, ",i);
    }
        printf("\b\b \n");
    return 0;
}