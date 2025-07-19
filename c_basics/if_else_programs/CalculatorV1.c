#include<stdio.h>
int main()
{
    char operator;
    float num1,num2,res;

    printf("\nEnter Arithmetic Operator=>");
    scanf("%c", &operator);

    if(operator == '+')
    {
        printf("Enter num1 =>");
        scanf("%f",&num1);
        printf("Enter num2 =>");    
        scanf("%f",&num2);
        res= num1 + num2;
        printf("=    %.2f",res);
    }
    else if (operator == '-')
    {
      printf("Enter num1 =>");
        scanf("%f",&num1);
        printf("Enter num2 =>");
        scanf("%f",&num2);
        res= num1 - num2;
        printf("= %.2f",res);  
    }
    else if (operator == '*')
    {
    printf("Enter num1 =>");
        scanf("%f",&num1);
        printf("Enter num2 =>");
        scanf("%f",&num2);
        res= num1 * num2;
        printf("= %.2f",res);
    }
    else if (operator == '/')
    {
     printf("Enter num1 =>");
        scanf("%f",&num1);
        printf("Enter num2 =>");
        scanf("%f",&num2);
        res= num1 / num2;
        printf("= %.2f",res);
    }
else{
    printf("\n %c is not valid operator",operator);
}
    return 0;
}