#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,diameter,area,circumference;
    printf("Enter the radius=>");
    scanf("%f",&radius);
    diameter= 2*radius;
    area= PI*radius*radius;
    circumference= 2*PI*radius;
    printf("The diameter of the cirlce is %.2f",diameter);
    printf("\nThe area of the cirlce is %.2f",area);
    printf("\nThe circumference of the circle is %.2f",circumference);
    return 0;
}