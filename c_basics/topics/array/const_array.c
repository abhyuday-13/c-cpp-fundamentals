#include<stdio.h>
int main()
{
    const int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // arr[1] = 45;
    // Using the const keyword, makes the array constant.
    // therefore you won't be able to change the value of the array.

    // It assures us that the program will not modify the array which may contain some valuable info.
    
    return 0;
}