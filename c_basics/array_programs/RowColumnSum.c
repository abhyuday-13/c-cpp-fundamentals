#include <stdio.h>
int main()
{
    int arr[5][5] = {{6, 7, 8, 2, 3},
                     {13, 4, 3, 5, 20},
                     {12, 11, 56, 9, 88},
                     {14, 17, 27, 6, 62},
                     {1, 4, 7, 8, 30}};
    int i, j, sum = 0;
    // ROW SUM
    printf("ROW SUM = ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\n");
    // COLUMN SUM
    printf("COLUMN SUM = ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += arr[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}