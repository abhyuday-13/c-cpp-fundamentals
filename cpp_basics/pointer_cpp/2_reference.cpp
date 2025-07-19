#include <iostream>

using namespace std;

// reference works as an alias for an existing variable
// it doesn't point to the variable, it becomes the variable

// pass by reference
void change(int &x) {
	x = 100;
}

void print(const string &name) {
	cout << name;
}

int &getMax(int &a, int &b) {
	return (a > b) ? a : b;
}

int main() {

	int a = 10;
	int &ref = a; // reference to a
	cout << ref << endl;

	change(a);
	cout << a << endl;

	// returning reference from functions
	int x = 10, y = 20;
	int &maxVal = getMax(x, y);

	maxVal = 30; // modify the value of larger number
	cout << "x = " << x << ", y = " << y;

	return 0;
}

/*
RULES ->
-must be initialized when declared
-can't be null
-no need to dereference
-cannot be reset or made to refer another object

USE ->
-in function arguments to allow modification of the original variable passed
-efficient for large data structures
*/