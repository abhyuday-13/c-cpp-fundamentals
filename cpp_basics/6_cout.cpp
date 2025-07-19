#include <iostream>

using namespace std;

int main() {

	cout << "Basic Usage" << endl;

	// write() to output a string of characters
	// put() to write a single character
	char c = 'A';
	char s[] = "You sir, are a fish.";
	cout.write(s, 7);
	cout << endl;
	cout.put(c);
	cout.put('\n');

	// Chaining multiple insertions
	int a = 10, b = 20;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	// cout.precision(int)	Sets the decimal precision for displaying floating-point numbers.
	double pi = 3.14159265;
	cout << "Default: " << pi << endl;

	cout.precision(4); // Shows 4 significant digits
	cout << "Precision(4): " << pi << endl;

	cout << fixed;
	cout << "Fixed + Precision(4): " << pi << endl; // four digits after decimal

	return 0;
}