// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of triangle=>");
    scanf("%d%d%d", &a, &b, &c);
    // If the triangle is valid or not
    if (a + b > c && a + c > b && b + c > a)
    {
        // Type of triangle
        if (a == b && b == c)
        {
            printf("The given triangle is equilateral.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The given triangle is isosceles.\n");
        }
        else
        {
            printf("The given triangle is scalene.\n");
        }
    }
    else
    {
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}