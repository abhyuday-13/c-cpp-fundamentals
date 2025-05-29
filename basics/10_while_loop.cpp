#include <iostream>

using namespace std;

int main() {

	/*
	Syntax ->
	while (condition) {
	//Code Block
	update expression
	}
	*/

	int num;

	cout << "Enter any number: ";
	cin >> num;

	while (num != 13) {
		if (num < 13) {
			cout << num << " ";
			num++;
		} else {
			cout << num << " ";
			num--;
		}
		if (num == 13)
			cout << "You sir, are a fish!";
	}

	/*
	Infinite Loop ->
	while (true) {
	    cout << "69" << endl;
	}
	*/
	return 0;
}