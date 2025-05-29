#include <iostream>

using namespace std;

int main() {

	string name;
	int age;

	cout << "Enter Your Name: ";
	// getline(cin,name);  //Use getline for full name input
	cin >> name;

	cout << "Enter Your Age: ";
	cin >> age;

	cout << "Your Name: " << name << endl;
	cout << "Your Age: " << age << endl;

	// Buffered output means that the data is first stored in a buffer (temporary memory) and written to the output device later
	cerr << "An error occured\n"; // unbuffered standard error stream which is used to output error messages or diagnostics.
	clog << "This is a log message" << endl;

	return 0;
}