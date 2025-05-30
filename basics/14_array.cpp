#include <iostream>

using namespace std;

int main() {

	int arr1[5];                       // declaration
	int arr2[5] = {2, 4, 6, 8, 10};    // intialization
	int arr3[5] = {2, 4, 6};           // partial intialization
	int arr4[] = {2, 4, 6, 8, 12, 16}; // intialization without size
	int arr5[5] = {0};                 // intialized to zero

	int arr[] = {1, 3, 5, 7, 9, 11};

	cout << "First element: " << arr[0] << endl;  // accessing first element
	cout << "Fourth element: " << arr[3] << endl; // accessing fourth element

	// traversing array - visiting each element one by one
	cout << "Elements of the array: ";
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	arr[3] = 69; // update array elements
	cout << "\nFourth element after updation: " << arr[3] << endl;

	// using sizeof() operation
	char arrayChar[] = {'a', 'b', 'c', 'd', 'e'};
	cout << "Size of arrayChar[0]: " << sizeof(arrayChar[0]) << endl;
	cout << "Size of arrayChar: " << sizeof(arrayChar) / sizeof(arrayChar[0]) << endl;

	return 0;
}