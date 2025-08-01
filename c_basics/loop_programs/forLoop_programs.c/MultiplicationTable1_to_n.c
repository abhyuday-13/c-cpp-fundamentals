/*
Write a program in C to display the multiplier table vertically from 1 to n.
Test Data :
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
*/
#include<stdio.h>
int main()
{
    int i,j,n;
        printf("Enter number of terms=>");
        scanf("%d",&n);
    printf("\nMultiplication table from 1 to %d \n", n);
     
     for ( i = 1; i <= 10; i++)
    {
        for ( j = 1 ; j <= n ; j++)
        {
            printf("%d x %-2d = %-3d ",j,i,(i*j));
        }
        printf("\n");    
    }   

    return 0;
}
