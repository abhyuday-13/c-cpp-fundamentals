// MATRIX MULTIPLICATION
// #columns of 1st matrix = #rows of 2nd matrix
// A(pxq) , B(mxn) | then q = m and resultant matrix will be of order (pxn)
#include <stdio.h>
#define MAX 50

int main()
{
    int rowA, columnA, rowB, columnB;
    int matA[MAX][MAX], matB[MAX][MAX], product[MAX][MAX] = {0};

    // Input matrix A dimensions and elements
    printf("Enter the rows and columns of matrix A: ");
    scanf("%d%d", &rowA, &columnA);
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    // Input matrix B dimensions
    printf("Enter the rows and columns of matrix B: ");
    scanf("%d%d", &rowB, &columnB);

    // Validation
    if (columnA != rowB)
    {
        printf("Error: Matrix multiplication not possible. Columns of A must match rows of B.\n");
        return 1; // Exit program
    }

    // Input matrix B elements
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            for (int k = 0; k < columnA; k++)
            { // or k < rowB
                product[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    // Resultant Matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/* 3x3 Multiplication Basic
 #include <stdio.h>
#define MAX 50
int main()
{

    int matA[MAX][MAX] = {{13, 15, 16},
                          {1, 2, 3},
                          {4, 5, 6}};
    int matB[MAX][MAX] = {{20, 45, 10},
                          {5, 1, 8},
                          {1, 2, 3}};
    int sum[MAX][MAX] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum[i][j] += matA[i][k] * matB[k][j];
            }
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
} */ 