#include <stdio.h>

int main() 
{
    int integer;
    float decimal;
    char character;
    double largeDecimal;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a floating point number: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &character); 

    printf("Enter a double precision number: ");
    scanf("%lf", &largeDecimal);

    printf("\nEntered integer: %d\n", integer);
    printf("Entered float: %f\n", decimal);
    printf("Entered character: %c\n", character);
    printf("Entered double: %lf\n", largeDecimal);

    return 0;
}