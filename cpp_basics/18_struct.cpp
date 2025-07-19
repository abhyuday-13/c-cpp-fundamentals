#include <iostream>

using namespace std;

// structures - user defined data type that lets you group variables of different types under a single name

// define basic structure
// size of a structure is determined by the sum of the sizes of its individual data members,
// with additional padding added by the compiler to ensure proper memory alignment.

struct Student {
	string name;
	int rollNo;
	float marks;

	// Member function inside struct
	void display() const {
		cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
	}
};

struct Book {
	string title;
	string author;
	int year;

	// Constructor to intialize members
	Book(string t, string a, int y) : title(t), author(a), year(y) {}
	// OR
	/*
	Book(string t, string a, int y) {
	    title = t;
	    author = a;
	    year = y;
	}	*/

	void display() const {
		cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
	}
};

// NESTED STRUCTURE
struct Address {
	string city;
	string state;
	int pincode;
};

struct Employee {
	int id;
	string name;
	Address addr; // nested struct usage
};

int main() {

	// Initialize structure members manually
	Student student1;
	student1.name = "Dragonborn"; // members accessed using dot operator
	student1.rollNo = 69;
	student1.marks = 96.4;

	// initialize using list intialization
	Student student2 = {"Kingslayer", 12, 89.5};

	cout << "Student Info: " << endl;
	// calling member function
	student1.display(); // student1.Student::display();

	cout << "Name: " << student2.name << ", Roll No: " << student2.rollNo << ", Marks: " << student2.marks << endl;

	// Use of nested struct
	Employee e1;
	e1.id = 958;
	e1.name = "Bub";
	e1.addr = {"Gutter", "Bub Land", 960023};

	cout
	    << "\nEmployee Info:\n";
	cout << "ID: " << e1.id << ", Name: " << e1.name
	     << ", City: " << e1.addr.city
	     << ", State: " << e1.addr.state
	     << ", Pincode: " << e1.addr.pincode << endl;

	// create book objects using constructor
	Book book1("The Art of War", "Sun Tzu", 475);
	Book book2("Mushashi", "Eiji Yoshikawa", 1939); // This calls Book::display()

	cout << "\nBook Info:\n";
	book1.display();
	book2.display();

	return 0;
}

/*
-----------------------------------
STRUCTURE SYNTAX

struct StructName {
    type1 member1;
    type2 member2;
    ...
};

Structure Variable Declaration:

StructName var1;
StructName var2 = {value1, value2};

NOTE:
- Members cannot be initialized directly in the definition (pre-C++11).
- From C++11 onwards, you can actually initialize members directly in the struct
- Great for default values and cleaner constructors!
- Use constructors or assignment to set values.
-----------------------------------
*/

/*
C++20 Designated Initializers (more readable, order doesn't matter):
   Student s = {
       .name = "Aegon",
       .marks = 98.7,
       .rollNo = 101
   };
*/
