#include<stdio.h>
#include<math.h>
//We use math.h for mathematical functions

int main()
{
    double A = sqrt(9);//To find the square root of a given number.
    double B = pow(2,3);//To find power of a given number.
    int C = round(3.14);//To round up the given decimal.
    int D = ceil(3.14); //Ceil function returns the smallest integer that is greater than or equal to a given number.
    int E = floor(3.99);//Floor fucntion returns the smallest integer that is less than or equal to a given number.
    double F = fabs(-100);//To calculate the absolute value of a floating-point number
    double G = log(3);//Logaritmic value 
    double H = sin(45);//Trignometric value

    printf("%.2lf",A);
    printf("\n%.2lf",B);
    printf("\n%d",C);
    printf("\n%d",D);
    printf("\n%d",E);
    printf("\n%lf",F);
    printf("\n%lf",G);
    printf("\n%lf",H);

    return 0;
}