#include <iostream>

using namespace std;

// typedef (C-style alias)
typedef struct Book {
	string title;
	string author;
	int pages;

} Book;

// using (Modern C++ alias)
using Laptop = struct {
	string brand;
	int ramGB;
};

// Function that takes struct by value
void printBook(Book b) {
	cout << "Book: " << b.title << " by " << b.author << "," << b.pages << " pages" << endl;
}

// Function that takes struct by reference
void upgradeLaptop(Laptop &laptop1) {
	laptop1.ramGB += 4;
	cout << "Upgrades RAM to " << laptop1.ramGB << " GB" << endl;
}

/*
struct comparison
bool operator==(const Book &a, const Book &b) {
    return a.title == b.title && a.author == b.author && a.pages == b.pages;
}
    Without this overload, C++ has no idea how to compare your custom structs,
    and you’d get a compiler error if you tried b1 == b2.
*/

int main() {
	Book library[2] = {
	    {"C++ Primer", "Stanley B. Lippman", 970},
	    {"Clean Code", "Robert C. Martin", 464}};

	cout << "\nLibrary Books:\n";
	for (int i = 0; i < 2; ++i) {
		printBook(library[i]);
	}

	Laptop myLaptop = {"Lenovo", 16};
	cout << "\nLaptop brand: " << myLaptop.brand << ", RAM: " << myLaptop.ramGB << " GB\n";
	upgradeLaptop(myLaptop);

	return 0;
}