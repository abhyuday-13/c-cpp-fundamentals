#include<stdio.h>
int main()
{
    int n = 13;
    int varA = 0,varB = 1,next;
    printf("\nFibonacci Series : 0,1");
    
    for(int i = 1; i <= n; i++)
    {
        next = varA + varB;
        printf(",%d",next);
        varA = varB;
        varB = next;
    }
    return 0;
}