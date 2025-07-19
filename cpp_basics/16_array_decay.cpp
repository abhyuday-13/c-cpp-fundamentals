#include <iostream>

using namespace std;

// arrays are always passed by reference, not by value
// when you pass an array to a function you are passing the memory address of its first element

// function declaration
/*
-SIZE INFO IS LOST
-array will be passed as pointers
-ARRAY DECAY -> The loss of type and dimensions of an array is known as decay of an array.

void sized_array_notation(int arr[5]) {}
void unsized_array_notation(int arr[]) {}
void pointer_notation(int *arr) {}
*/

// solution -> pass size as additional parameter
void sized_array_notation(int arr[5], int size) {}

void unsized_array_notation(int arr[], int size) {}

void pointer_notation(int *arr, int size) {}

int main() {

	int arr[] = {2, 4, 8, 12, 16};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Passing array
	/*
	sized_array_notation(arr);
	unsized_array_notation(arr);
	pointer_notation(arr);	*/

	sized_array_notation(arr, n);
	unsized_array_notation(arr, n);
	pointer_notation(arr, n);

	return 0;
}