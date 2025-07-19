#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter any character=>");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z' || ch >='A' && ch <= 'Z')   
    {
       printf("Character is an alphabet");
    }
    else
    {
        printf("Character is NOT an alphabet");
    }
    
    return 0;
}