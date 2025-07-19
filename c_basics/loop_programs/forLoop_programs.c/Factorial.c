/*
Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/
#include<stdio.h>
int main()
{
    int x = 1, n;
    printf("\nInput the number: ");
    scanf("%d", &n); 
    if (n < 1)
        printf("Enter valid input.");
    else{
    for(int i = 1; i <= n; i++ )
    {
        x *= i; 
    }
    printf("The Factorial of %d is %d", n, x);
    }
    return 0;
}