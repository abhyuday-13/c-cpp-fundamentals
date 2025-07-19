// Write a C program to check whether a given number is a palindrome or not.
#include <stdio.h>
int main()
{
    int reversed = 0, originalNum, num, remainder;
    printf("Input any number =>");
    scanf("%d", &num);
   
    originalNum = num;
    
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
        if (originalNum == reversed)
        {
            printf("%d is a palindrome.\n",originalNum);
        }
        else{
            printf("%d is not a palindrome.\n",originalNum);
        }
    
    return 0;
}