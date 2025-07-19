// C Program to Find All Factors of a Natural Number

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number =>");
    scanf("%d", &num);

    printf("\nThe factors of %d are :\n", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d, ", i);
    }
    printf("\b\b \n");
    return 0;
}