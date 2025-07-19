#include <iostream>

using namespace std;

// pointers - variable that holds the memory address of another variable
// size of pointer is equal for every pointer - 8 byte for 64-bit System

int main() {
	int x = 10; // variable
	int *ptrX;  // pointer variable
	ptrX = &x;  // address of x in myptr

	cout << '\n';
	cout << "Value of x = ";
	cout << x << endl;

	// directly accessing will give the address stored
	cout << "Address stored in ptrX = ";
	cout << ptrX << endl;

	// dereferencing - access the value present at the stored memory address
	cout << "Value of x using *ptrX = ";
	cout << *ptrX << '\n'
	     << endl;

	// array name acts like constant pointer to first element of the array
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr1 = &arr[0]; // pointer to first element
	int *ptrArr = arr;
	cout << *ptr1 << endl;
	cout << *ptrArr << endl;

	// using dereferencing to print elements of array
	cout << "Elements of array: ";
	for (int i = 0; i < 5; i++) {
		cout << *(ptrArr + i) << " ";
	}
	cout << endl;

	cout << "\n===============================\nChanging value of the pointer\n===============================" << endl;
	// Changing the value of the pointer

	// 1. Change the address of the stored variable

	int a = 10, b = 20;
	int *ptr;

	ptr = &a;

	cout << "\nThe address where a is stored is: " << ptr << endl;
	cout << "The value stored at the address: " << *ptr << endl; // through dereferencing

	ptr = &b;

	cout << "Pointer is now pointing at: " << ptr << endl;
	cout << "New Value the pointer is pointing to is: " << *ptr << endl; // through dereferencing

	cout << "\n\n";

	// 2. Changṇe the value of the stored variable

	int m = 8, n = 13;

	int *pt;
	pt = &m;

	cout << "The address where m is stores is: " << pt << endl;
	cout << "The value stored at the address: " << *pt << endl;

	*pt = b;

	cout << "Pointer is still pointing at: " << pt << endl;
	cout << "The new value stored at the address: " << *pt << endl
	     << endl;

	return 0;
}
