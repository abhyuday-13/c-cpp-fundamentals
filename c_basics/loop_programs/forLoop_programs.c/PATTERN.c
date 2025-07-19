#include<stdio.h>
int main()
{

/*SQUARE PATTERN
int n = 4;
    for (int  i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*RIGHT HALF PYRAMID
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    } */
/*INVERTED RIGHT HALF PYRAMID (ASTERISK)
int rows = 5;
for (int  i = 1; i <= rows; i++)
    {
    for (int j = rows ; j >= i; j--)
    {
        printf("* "); 
    }
    printf("\n");
    }
*/
/*RIGHT HALF PYRAMID (NUMBER)
 int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //printf("%d ", j);     // To print incremental number triangle
            //printf("%d ",i);      // To print same number is each row
        }
        printf("\n");
    }
//NOTE TO SELF :- inner loop intialization is j = 1
*/
/*HALF DIAMOND PATTERN 
int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int  i = 1; i <= rows; i++)
   {
    for (int j = rows ; j >= i; j--)
    {
        printf("*"); 
    }
    printf("\n");
   }
*/
/*LEFT HALF PYRAMID
int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*INVERTED LEFT HALF PYRAMID
int n = 5;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
*/
/*FULL PYRAMID
int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*INVERTED FULL PYRAMID
int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
*/
/*FULL PYRAMID (ODD)
int n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*INVERTED FULL PYRAMID (ODD)
int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            printf("* ");
        }
            printf("\n");
    }
*/
/*RHOMBUS PATTERN
int n = 5;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++ )
        { 
            printf("-");
        }
        for(int k = 0; k < n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*DIAMOND PATTERN
int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*HOURGLASS PATTERN
int n = 10;
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/
/*HOLLOW SQUARE PATTERN
int n = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("* ");
            for (int k = 1; k <= n - 2; k++)
            {
                printf("  ");
            }
            printf("* ");
        }

        printf("\n");
    }
*/
/*HOLLOW FULL PYRAMID
int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int spc = 1; spc <= 2*(n - i); spc++)
        {
            printf(" ");
        }
        if (i == n)
        {
            for (int j = 1; j <= (2 * n) - 1; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("* ");
            for (int k = 1; k <= (2 * i) - 3; k++)
            {
                printf("- ");
            }
            if (i > 1){
                printf("* ");}
        }
        printf("\n");
    }
*/
/*HOLLOW INVERTED FULL PYRAMID
    // https://www.youtube.com/watch?v=R7Z7nvxgDMw
int n = 5;
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= 2 * n - 1; col++)
        {
            if (row == 1 || row == col || row + col == 2 * n)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
*/
/*HOLLOW DIAMOND PATTERN
int n = 5;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }
        if (i == 1)
            printf("\n");
        else
            printf("*\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }
        if (i == 1)
            printf("\n");
        else
            printf("*\n");
    }
*/
/*PASCAL'S TRIANGLE V1
int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int spc = 1; spc <= n - i; spc++)
        {
            printf(" ");
        }
            
        int C = 1; // coefficient

        for (int k = 1; k <= i; k++)
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
*/
/*PASCAL's TRIANGLE V2
int fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// function to calculate combination (nCr), using the formula nCr = n! / (r! * (n - r)!)
int combination(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

// function to print Pascal's triangle up to a specified number of rows
void printPascalsTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - i - 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows => ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
*/
/*FLOYD's TRIANGLE (BINARY)
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i;j++)
        {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
*/
/*CHARACTER TRIANGLE
int rows = 5;
    char ch = 'A';
    for (int i = 1; i <= rows; i++ )
    {
        for (int j = 1; j <= i; j++)    
        {
            printf("%c ",ch);
            // ch++     // if want to print continuous character pattern (comment other ch++)
        }
        ch++;
        printf("\n");
    }
*/

    return 0;
}