#include <iostream>

using namespace std;

/* =====================================================
   >> FUNCTION BASICS
   ===================================================== */

/*
return_type function_name (parameter) {
    // body of the function
    return value; // if return_type is not void
}
*/

// a and b are parameters (variables listed in function definition)
int add(int a, int b) {
	return a + b;
}

void greet() {
	cout << "You sir, are a fish !" << endl;
}

void welcome(string name = "Guest") {
	cout << "Welcome, " << name << "!" << endl;
}

/* =====================================================
   >> FUNCTION OVERLOADING (same name, different parameters)
   ===================================================== */

void display(int x) {
	cout << "Integer: " << x << endl;
}

void display(double x) {
	cout << "Double: " << x << endl;
}

/* =====================================================
   >> CONST PARAMETERS
   (won't allow modification of argument)
   ===================================================== */

void printMessage(const string &msg) {
	cout << "Message: " << msg << endl;
}

/* =====================================================
   >> INLINE FUNCTION
   Compiler may replace function call with its code body
   ===================================================== */

inline int square(int x) {
	return x * x;
}

/* =====================================================
   >> RECURSIVE FUNCTION
   Calls itself until base condition is met
   ===================================================== */

int fact(int n) {
	if (n <= 1)
		return 1;
	return n * fact(n - 1);
}

/* =====================================================
   >> LAMBDA FUNCTIONS
   Small anonymous functions for immediate use
   ===================================================== */

auto sayLambda = []() {
	cout << "LAMBDA !" << endl;
};

auto lambdaAdd = [](int a, int b) -> int {
	return a + b;
};

/* ==================================
>> FUNCTION PROTOTYPE
================================== */

void prototype();

/* =====================================================
>> MAIN FUNCTION
Function calls and demonstrations
===================================================== */

int main() {
	int result = add(5, 3); // function call
	                        // 5 and 3 are arguments (actual values passed when calling)
	cout << "Sum: " << result << endl;

	greet();

	welcome();           // use default argument
	welcome("Abhyuday"); // use given value

	display(10);
	display(6.9);

	printMessage("IT'S OVER 9000");

	// Calling inline function
	int inlineResult = square(13);
	cout << inlineResult << endl;

	cout << "factorial(5): " << fact(5) << endl;

	sayLambda();
	cout << lambdaAdd(10, 3) << endl;
	int offset = 5;
	auto addOffset = [offset](int x) {
		return x + offset;
	};
	cout << "addOffset(10): " << addOffset(10) << endl;

	prototype();

	return 0;
}

void prototype() {
	cout << "Brave six, going dark." << endl;
}

/* =====================================================
   >> NOTES: INLINE FUNCTION
   =====================================================

   -> Compiler tries to copy the code of the function where it is called
      instead of jumping to the function like normal
   -> Inlining a function is only a request to the compiler, not a command
   -> Removes function call overhead, potentially faster execution
   -> if function body is big or complicated, dont use not worth it
*/

/* =====================================================
   >> NOTES: LAMBDA FUNCTION
   =====================================================

   Syntax:

   [capture] (parameters) -> return_type {
       // function body
   };

   [capture] -> specifies which external variables are accessible inside lambda
       [&] to pass everything by reference
       [=] to pass everything by value
       or specify individual variables

   [parameters] -> input parameters like normal functions

   return_type is optional and usually inferred automatically

   Useful when:
   - You need short functions for immediate use
   - Passing logic to STL algorithms
   - Accessing local variables inside a function
   - Writing cleaner and more expressive code
*/

/* ================================
   >> NOTES: FUNCTION PROTOTYPE
   ================================

   - allows the function to be called before its definition
   - enables typechecking for parameters and return values
   means using right data in the right place
*/