/*Types of Array in C

There are two types of arrays based on the number of dimensions it has. They are as follows:

One Dimensional Arrays (1D Array)
Multidimensional Arrays - array of arrays
*/

// 1. 1D Array in C
//    Syntax -> array_name[size];

// C Program to illustrate the use of 1D Array
#include <stdio.h>
int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * i - 2 * i + 1;
    }
    printf("Elements of Array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*OUTPUT ->
Elements of Array: 1 0 1 4 9 */

/*SIZE CALCULATION OF MULTIDIMENSIONAL ARRAY

size of arr[10][20] = 10*20 = 200 elements
                    = 200 * 4 = 800 bytes
*/

// 2. 2D Array in C

/* 2D array = an array, where each element is an entire array
            useful if you need a matrix, grid, or table of data

Syntax -> data_type array_name[size1] [size2]; */

// C Program to illustrate 2d array
#include <stdio.h>

int main()
{

    // declaring and initializing 2d array
    int arr[2][3] = {10, 20, 30, 40, 50, 60};

    printf("2D Array:\n");
    // printing 2d array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// ANOTHER EXAMPLE FOR 2D Array
#include <stdio.h>

int main()
{
    // int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int numbers[2][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 3. 3D Array in C

/* Syntax -> data_type array_name[x][m][n]
Here, x = Number of 2D arrays, m = Number of rows in each 2D array,
                               n = Number of columns in each 2D array */

// Intialization ->

int arr[2][3][2] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int arr[2][3][2] = {{{1, 1}, {2, 3}, {4, 5}},
                    {{6, 7}, {8, 9}, {10, 11}}};

// Printing the elements of 3D array
#include <stdio.h>
int main()
{
    int arr[2][2][3] = {{{1, 2, 3}, {4, 5, 6}},
                        {{7, 8, 9}, {10, 11, 12}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
        }
    }
    
    return 0;
}


