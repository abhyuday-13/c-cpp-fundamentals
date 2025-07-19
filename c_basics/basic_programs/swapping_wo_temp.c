#include<stdio.h>
int main()
{
    int A=13,B=8;
    printf("Before swapping A=%d\tB=%d",A,B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("\nAfter swapping A=%d\tB=%d",A,B);
    return 0;
}