#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter three numbers =>");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("maxium number is %d", a);
        }
        else
        {
            printf("maximum number is %d", c);
        }
    }
    else if (b > c)
    {
        printf("maximum number is %d", b);
    }
    else
    {
        printf("maximum number is %d", c);
    }
    return 0;
}