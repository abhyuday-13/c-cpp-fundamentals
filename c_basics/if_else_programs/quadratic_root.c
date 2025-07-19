//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x,y,img;                      //D = discriminant, x and y are roots, img = imaginary number
    printf("Enter coefficients a,b,c =>");
    scanf("%f%f%f",&a,&b,&c);
    
    D = ((b*b)-4*a*c);
    x = ((-b)+sqrt(D))/(2*a);
    y = ((-b)-sqrt(D))/(2*a);
    
    if (D > 0)
    {
    printf("Two distinct real roots are %.2f and %.2f",x,y);
    }
    else if (D == 0)
    {
        printf("Equation has only one real root => %.2f",x);
    }
    else
    {
        x = -b/(2*a);
        img = sqrt(-D)/(2*a);
        printf("The two complex roots are %.2f + %.2fi and %.2f - %.2fi",x,img,x,img);
    }
    

    
    
    
    return 0;
}