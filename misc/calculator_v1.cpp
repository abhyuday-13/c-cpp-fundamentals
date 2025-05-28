#include <iostream>

using namespace std;

int main() {

	int option;
	float num1, num2;
	char choice;

	cout << "$$$$$$$$$$$$$$$$\n"
	     << "Chill Calculator\n"
	     << "$$$$$$$$$$$$$$$$\n"
	     << endl;

	do {

		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;

		cout << "1. Addition\n"
		     << "2. Subtraction\n"
		     << "3. Multiplication\n"
		     << "4. Division" << endl;

		cout << "Choose any operation (1-4): ";
		cin >> option;

		switch (option) {
		case 1:
			cout << "\nResult: " << (num1 + num2) << endl;
			break;
		case 2:
			cout << "\nResult: " << (num1 - num2) << endl;
			break;
		case 3:
			cout << "\nResult: " << (num1 * num2) << endl;
			break;
		case 4:
			if (num2 != 0) {
				cout << "\nResult: " << (num1 / num2) << endl;
			} else {
				cout << "\nError: Division by zero is not allowed." << endl;
			}
			break;
		default:
			cout << "\nInvalid Option! Please choose between 1 and 4" << endl;
			break;
		}

		cout << "\nDo you want to perform another calculation ? (y/n): ";
		cin >> choice;
	}

	while (choice == 'y' || choice == 'Y');

	if (choice == 'n' || choice == 'N') {
		cout << "You sir, are a fish!" << endl;
	}
    
	return 0;
}