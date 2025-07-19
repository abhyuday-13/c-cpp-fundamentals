// Using sizeof operator

// number of elemnts = sizeof(name_of_arr)/sizeof(name_of_arr[0])
// size of whole array = size of 1 array elemnt * number of elements

#include<stdio.h>
int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 40.0};

    printf("Size of array: %d bytes\n", sizeof(prices));
    
    printf("Numbers of element: %d\n",sizeof(prices)/sizeof(prices[0]));
    
    printf("Elements of array:\n");
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf, ",prices[i]);
    }
    printf("\b\b \n");
    return 0;
}