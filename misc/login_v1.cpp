#include <iostream>
#include <string>

using namespace std;

int main() {

	string realUsername = "bigpp_13";
	string realPassword = "abhyuday@13";

	string inputUsername;
	string inputPassword;

	cout << "Please enter your login credentials -> \n"
	     << "--------------------------------------" << endl;

	for (int i = 1; i <= 3; i++) {

		cout << "Username: ";
		cin >> inputUsername;

		if (inputUsername == realUsername) {
			cout << "Password: ";
			cin >> inputPassword;

			if (inputPassword == realPassword) {
				cout << "Login successfull !" << endl;
				break;
			} else {
				cout << "Incorrect Password!" << endl;
			}
		} else {
			cout << "Incorrect Username!" << endl;
		}

		int attemptsLeft = 3 - i;

		if (attemptsLeft > 0) {
			cout << "Attempts Left: " << attemptsLeft << endl;
		} else {
			cout << "\nToo many attempts. ACCESS DENIED." << endl;
		}
	}

	return 0;
}