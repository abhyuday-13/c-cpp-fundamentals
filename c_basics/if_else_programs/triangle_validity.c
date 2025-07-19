#include <stdio.h>
int main()
{

    // Write a C program to input angles of a triangle and check whether triangle is valid or not.
    int angleA, angleB, angleC, sum;
    printf("\nEnter three angles=>");
    scanf("%d%d%d", &angleA, &angleB, &angleC);
    sum = angleA + angleB + angleC;
    if (sum == 180 && angleA > 0 && angleB > 0 && angleC > 0)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    // Write a C program to input all sides of a triangle and check whether triangle is valid or not.
    int sideA, sideB, sideC;
    printf("\nEnter three sides of triangle=>");
    scanf("%d%d%d", &sideA, &sideB, &sideC);
    if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
    {
        printf("the triangle is valid");
    }
    else
    {
        printf("triangle is NOT valid");
    }

    return 0;
}
