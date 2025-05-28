#include <iostream>
using namespace std;

int main() {
	int number;
	char choice;

	// This block will execute at least once
	do {
		cout << "Enter a number: ";
		cin >> number;

		cout << "You entered: " << number << endl;

		cout << "Do you want to enter another number? (y/n): ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	cout << "You sir, are a fish." << endl;


	/*
	Infinite Loop ->
	do {
        cout << "noob" << endl;
    }while (true);
	*/
	return 0;
}
