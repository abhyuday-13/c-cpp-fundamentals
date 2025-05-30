#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

	double a, b, c;

	cout << "Quadratic Equation: ax^2 + bx + c" << endl;
	cout << "Enter the value of a,b,c" << endl;

	cout << "a = ";
	cin >> a;
	if (a == 0) {
		cout << "Not a quadratic equation\n";
		return 0;
	}

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	double D = (b * b - 4 * a * c);

	if (D > 0) {
		double root1 = (-b + sqrt(D)) / (2.0 * a);
		double root2 = (-b - sqrt(D)) / (2.0 * a);
		cout << fixed << setprecision(2);
		cout << "Two distinct real roots: " << root1 << " " << root2 << endl;
	} else if (D == 0) {
		double root = -b / (2.0 * a);
		cout << fixed << setprecision(2);
		cout << "One real root: " << root << endl;
	} else {
		double realPart = -b / (2.0 * a);
		double imaginaryPart = sqrt(-D) / (2.0 * a);
		cout << fixed << setprecision(2);
		cout << "Two complex roots: "
		     << realPart << " + " << imaginaryPart << "i\n"
		     << realPart << " - " << imaginaryPart << "i" << endl;
	}

	// system("pause");
	cout << "Press Enter to exit...";
	cin.ignore();
	cin.get();
	return 0;
}