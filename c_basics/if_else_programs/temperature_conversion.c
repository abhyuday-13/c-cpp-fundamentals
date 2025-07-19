#include<stdio.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Is the temperature in (C) or (F)=>");
    scanf("%c",&unit);
    unit= toupper(unit);
    if (unit == 'C')
    {
     printf("\nEnter The temperature in Celsius=>");
     scanf("%f",&temp);
     temp = (temp*9/5)+32;
     printf("\nThe temperature in Farenheit is: %.2f",temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temperature in Farenheit=>");
        scanf("%f",&temp);
        temp = ((temp-32)*5)/9;
        printf("\nThe temperature in Celsius is: %.2f",temp);
    }
    else{
        printf("\n %c is not valid",unit);
    }
    return 0;
}