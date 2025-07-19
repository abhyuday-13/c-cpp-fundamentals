#include <iostream>

using namespace std;

// a copy of arguement is passed. changes made inside the function don't affect the original variable
void passByValue(int x) {
	x = x + 10;
	cout << "[Inside passByValue] x = " << x << endl;
}

// the actual variable is passed. changed does affect the original
void passByReference(int &x) {
	x = x + 10;
	cout << "[Inside passByReference] x = " << x << endl;
}

// the address of the variable is passed. we use * to access or modify the actual value
void passByPointer(int *x) {
	*x = *x + 10;
	cout << "[Inside passByPointer] x = " << *x << endl;
}

int main() {

	int a = 5;
	cout << "=== Pass By Value ===" << endl;
	cout << "[Before] a = " << a << endl;
	passByValue(a);
	cout << "[After] a = " << a << " (No change because it's pass by value)" << endl
	     << endl;

	a = 5;
	cout << "=== Pass by Reference ===" << endl;
	cout << "[Before] a = " << a << endl;
	passByReference(a);
	cout << "[After]  a = " << a << " (Changed because it's pass by reference)" << endl
	     << endl;

	a = 5;
	cout << "=== Pass by Pointer ===" << endl;
	cout << "[Before] a = " << a << endl;
	passByPointer(&a);
	cout << "[After]  a = " << a << " (Changed because it's pass by pointer)" << endl;
	return 0;
}