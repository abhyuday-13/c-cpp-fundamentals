#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("\nEnter any number =>");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Error: Input positive number only.\n");
        return 1;
    }
    while (num > 0)
    {
        fact = fact * num;
        num--;
    }
    printf("Factorial : %d", fact);
    return 0;
}