#include<stdio.h>
int main()
{
    int C=13,D=8,temp;
    printf("Before swapping C=%d\tD=%d",C,D);
    temp=C;
    C=D;
    D=temp;
    printf("\nAfter swapping C=%d\tD=%d",C,D);
    return 0;
}