#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character=>");
    scanf("%c",&ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z'))
    {
        if (ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U')
            {
            printf("It's a vowel");
            }
        else{
            printf("It's a consonant");
            }   
    }
    else{
        printf("%c is not a valid alphabet",ch);
    }
    return 0;
}