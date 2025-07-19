#include <iostream>

using namespace std;

// multidimensional arrays
// data_type name [size1] [size2] [size3]....

void two_dimensional() {

	int arr[4][4]; // Declaring 2D array

	// initializing 2D array
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = i + j;
		}
	}

	// printing the elements of 2D array

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void three_dimensional() {

	int arr[3][3][3];

	// initializing the aray
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				arr[i][j][k] = i + j + k;
			}
		}
	}

	// printing the array
	for (int i = 0; i < 3; i++) {
		cout << i << "st layer:" << endl;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cout << arr[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

int main() {

	cout << "Elements of 2D Array :\n\n";
	two_dimensional();

	cout << "\nElements of 3D array:\n\n";
	three_dimensional();
	return 0;
}