/*Write a program in C to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include <stdio.h>
int main()
{
    int n = 0;
    float sum = 0;
    printf("\nInput number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d + ", i);
            sum += 1 / (float)i;
        }
        if (i == n)
        {
            printf("1/%d ", i);
            sum += 1 / (float)i;
        }
    }
    printf("\nSum of Series upto %d terms : %f \n", n, sum);
    return 0;
}