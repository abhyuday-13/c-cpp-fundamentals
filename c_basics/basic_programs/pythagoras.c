#include<stdio.h>
#include<math.h>
int main()
{
    double P,B,H;

    printf("Enter P=>");
    scanf("%lf",&P);

    printf("Enter B=>");
    scanf("%lf",&B);

    H= sqrt(P*P + B*B);
    printf("Hypotenuse=%.2lf",H);
    return 0;
}