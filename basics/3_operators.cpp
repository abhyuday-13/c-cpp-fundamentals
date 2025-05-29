#include <iostream>

int main() {

	int a = 8, b = 3;

	// Arithmetic Operators
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a % b = " << a % b << std::endl;

	std::cout << "----------------------" << std::endl;

	// Relational Operators
	int x = 6, y = 4;
	std::cout << "x == y is " << (x == y) << std::endl;
	std::cout << "x >= y is " << (x >= y) << std::endl;
	std::cout << "x <= y is " << (x <= y) << std::endl;
	std::cout << "x > y is " << (x > y) << std::endl;
	std::cout << "x < y is " << (x < y) << std::endl;
	std::cout << "x != y is " << (x != y) << std::endl;

	std::cout << "----------------------" << std::endl;

	// Logical Operators
	std::cout << "x && y is " << (x && y) << std::endl;
	std::cout << "x || y is " << (x || y) << std::endl;
	std::cout << "!b is " << (!b) << std::endl;

	std::cout << "----------------------" << std::endl;

	// Bitwise Operators
	std::cout << "a & b is " << (x & y) << std::endl; // Binary AND operator
	std::cout << "a | b is " << (x | y) << std::endl; // Binary OR operator
	std::cout << "a ^ b is " << (x ^ y) << std::endl; // Binary XOR operator
	std::cout << "a<<1 is " << (x << 1) << std::endl; // Left Shift operator
	std::cout << "a>>1 is " << (x >> 1) << std::endl; // Right Shift operator
	std::cout << "~(a) is " << ~(x) << std::endl;     // One’s Complement operator

	std::cout << "----------------------" << std::endl;

	// Ternary or Conditional Operators
	int result = (x > y) ? x : y;

	std::cout << "The greatest number is " << result << std::endl;

	return 0;
}