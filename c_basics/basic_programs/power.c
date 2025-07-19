#include<stdio.h>
#include<math.h>
int main()
{
    double base,exponent,power;

    printf("\nEnter the base number=>");
    scanf("%lf",&base);

    printf("Enter exponent value=>");
    scanf("%lf",&exponent);

    power= pow(base,exponent);
    printf("\n%.2lf",power);

    return 0;
}