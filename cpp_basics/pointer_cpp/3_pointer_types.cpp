#include <iostream>

using namespace std;

int main() {

	// 1. Wild Pointer - contains random address thay may or may not be valid
	//  dereferencing this pointer may lead to error (dangerous)
	int *wildPtr; // not initialized

	// 2. Null Pointer - does not point to any valid memory location but NULL
	int *nullPtr = nullptr;
	cout << "Null Pointer: " << nullPtr << endl;

	// 3. Void Pointers - that point to a vaule that has no particular type. They can point to any data type
	// can't be directly dereferenced
	int x = 10;
	void *voidPtr = &x;
	cout << "Voud Pointer (needs casting to use): " << *(int *)voidPtr << endl;

	// 4. Dangling Pointer - pointer to deleted or out of scope memory
	int *danglingPtr;
	{
		int temp = 42;
		danglingPtr = &temp;
	}
	// Now temp is out of scope, and dangPtr is dangling
	// cout << *dangPtr << endl; //Dangerous to use

	return 0;
}