#include<stdio.h>
int main()
{
// array = a data structure that can store many values of the same data type.

/* What is an Array in C ?
An array in C is a fixed-size collection of similar data items stored in contiguous memory locations.
It can be used to store the collection of primitive data types such as int, char, float, etc.,
and also derived and user-defined data types such as pointers, structures, etc.

Array Elements = 2 4 8 12 16 18
Array Indexes  = 0 1 2  3  4  5

Syntax of Array Declaration ->
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];             //where N is the number of dimensions */



// ARRAY INTIALIZATION
  
    int dates[5] = {5, 8, 12, 13, 31}; // Array Intialization with Declaration 
    char name[] = "abhyuday";          // Array Intialization with Declaration without size

    
    // Declaraing first and then assigning values (not preferred)
    double prices[4];                  

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;

    /*Traversal is the process in which we visit every element of the data structure.
    For C array traversal, we use loops to iterate through each element of the array.*/

    for (int i = 0; i < 5; i++)
    {
        dates[i];
    }
    
// C Program to demonstrate the use of array

    // array declaration and initialization
    int arr[5] = { 10, 20, 30, 40, 50 };

    // modifying element at index 2
    arr[2] = 100;

    // traversing array using for loop
    printf("Elements in Array: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
//END

    // DESIGNATED INTIALIZATION
    
    int arr[10] = {[0] = 1, [5] = 2, [6] = 3};                     // Each number in square brackets is said to be a "desginator".
    // is equivalent to -> int arr[10] = {1, 0, 0, 0, 0, 2, 3, 0, 0, 0};
    
    // int arr[] = {1, 7, 5, [5] = 90, 6, [8] = 5};  === int arr[] = {1, 7, 5, 0, 0, 90, 6, 0, 5};

    /*BUT, if there is a clash, then designated intializer will win
        int a[] = {1, 2, 3, [2] = 4, [6] = 45}; then int a[] = {1, 2, 4, 0, 0, 0, 45};
    */
    
    return 0;
}

/*What if number of elements are lesser than the length specified ?

    int arr[10] = {45, 6, 2, 78, 5, 6};

The remaining locations are filled by the value 0.

    int arr[10] = {45, 6, 2, 78, 5, 0, 0, 0, 0}
*/
// Easy way to intialize an array with all zeros is given by : int arr[10] ={0};