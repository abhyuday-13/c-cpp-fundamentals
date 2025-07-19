#include <stdio.h>
int main()
{
    int num1, num2, max;
    printf("\nEnter first number =>");
    scanf("%d", &num1);
    printf("Enter second number =>");
    scanf("%d", &num2);
    // max = (num1 > num2) ? num1 : num2;
    if (num1 > num2)
        max = num1;
    else
        max = num2;
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("The LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        ++max;
    }
    int HCF = (num1 * num2) / max;
    printf("\nHCF = %d",HCF);
    return 0;
}