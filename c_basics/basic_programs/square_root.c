#include<stdio.h>
#include<math.h>
int main()
{
    double num,root;
    printf("Enter the number=>");
    scanf("%lf",&num);
    root= sqrt(num);
    printf("The square root of the given number is %.2lf",root);
    return 0;
}