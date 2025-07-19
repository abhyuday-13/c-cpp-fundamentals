#include <cstring>  // for strcpy
#include <iostream> // for cout, endl

using namespace std;

// UNIONS: All members share the same memory location.
// Only ONE value is valid at a time.

union Data {
	int intVal;      // uses 4 bytes
	float floatVal;  // also 4 bytes
	char string[20]; // uses 20 bytes (largest member)
	                 //  size of union = size of its largest member
};

// NESTED UNION inside a struct: used in real-world modeling
struct Employee {
	string name;
	int id;

	union pay {
		float hourlyRate;
		float salary;
	} payment;
};

int main() {
	cout << "\n Union Basics:\n";
	Data d;

	d.intVal = 8;
	cout << "intVal = " << d.intVal << endl;

	d.floatVal = 1.5;
	cout << "floatVal = " << d.floatVal << endl;
	cout << "intVal (corrupted) = " << d.intVal << endl;

	strcpy(d.string, "bored");
	cout << "string = " << d.string << endl;
	cout << "floatVal (corrupted) = " << d.floatVal << endl;

	// Size check
	cout << "\n Size of Union:\n";
	cout << "sizeof(d)         = " << sizeof(d) << " bytes\n";
	cout << "sizeof(intVal)    = " << sizeof(d.intVal) << " bytes\n";
	cout << "sizeof(floatVal)  = " << sizeof(d.floatVal) << " bytes\n";
	cout << "sizeof(string[20])= " << sizeof(d.string) << " bytes\n";

	// Practical Usage with Nested Union
	cout << "\n Use of Nested Unions:\n";

	Employee e1;
	e1.name = "Mukesh";
	e1.id = 138;
	e1.payment.hourlyRate = 300;

	cout << "Employee Name: " << e1.name << endl;
	cout << "Employee ID:   " << e1.id << endl;
	cout << "Hourly Rate:   Rs. " << e1.payment.hourlyRate << endl;

	// If you set e1.payment.salary after this, hourlyRate gets corrupted!

	return 0;
}
