#include <stdio.h>
int main()
{
    int year;
    printf("\nEnter the year=>");
    scanf("%d", &year);

    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("Its is not a leap year");
        }
    }
    else
    {
        if (year % 400 == 0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("It is not a leap year");
        }
    }

    return 0;
}

/*OR  Check for leap year
    if (year % 400 == 0) {
        printf("It is a leap year");
    }
    else if (year % 100 == 0) {
        printf("It is not a leap year");
    }
    else if (year % 4 == 0) {
        printf("It is a leap year");
    }
    else {
        printf("It is not a leap year");
    }*/