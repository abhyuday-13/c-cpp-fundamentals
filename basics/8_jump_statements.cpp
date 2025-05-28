#include <iostream>

using namespace std;

void findNum(int n) {
	for (int i = 0; i <= 100; i++) {
		if (i == n) {
			cout << "Number in Range [0, 100]";

			// This will stop the function here
			return;
		}
	}
	cout << "Number not in Range [0, 100]";

	// Final return if the above one is not reached.
	return;
}

int main() {

	// continue execute some parts of the loop while skipping some parts declared inside the condition.
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		cout << i << " ";
	}

	cout << endl;

	// break is used to terminate the whole loop if conditions met. also with if else or switch to break out of the block
	for (int i = 0; i < 10; i++) {
		if (i == 8) {
			break;
		}
		cout << i << " ";
	}

	cout << endl;

	// return takes control out of the function itself.It is used to terminate the entire function after execution or after some condition.
	int n = 10;
	findNum(n);

	cout << endl;
	
	// goto statement in C and C++ is used to jump to another part of the program using a label.
	// It provides an unconditional jump, meaning the flow of control is transferred directly to a labeled statement, skipping anything in between.
	int num = 4;

	if (num % 2 == 0)
		goto label1;
	else
		goto label2;

label1:
	cout << "Even" << endl;
	return 0;
label2:
	cout << "Odd" << endl;
	return 0;
label3:
	cout << "Unspecified" << endl;
	return 0;

	return 0;
}