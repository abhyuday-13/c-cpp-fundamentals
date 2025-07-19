#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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
    printf("Armstrong numbers from 1 to 1000 are\n");
    
    for (int i = 1; i <= 1000; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d, ", i);
        }
    }

    printf("\b\b \n");         // Backspace twice to remove last comma and space and add new line.
    return 0;
}