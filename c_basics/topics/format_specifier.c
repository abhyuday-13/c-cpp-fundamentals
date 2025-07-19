#include <stdio.h>
int main()
{
    // format specifier % =  defines and formats a type of data to be displayed
    
    // %c = character
    // %s = string
    // %d = integer
    // %f = float
    // %lf = double
    
    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float a = 5.75;
    float b = 10.00;
    float c = 100.99;

    printf("a=%.2f\n", a);
    printf("b=%.0f\n", b);
    printf("c=%.3f\n", c);
}