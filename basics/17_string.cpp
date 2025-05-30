#include <iostream>
#include <string>

using namespace std;

int main() {

	//=======================
	// BASIC STRING HANDLING
	//=======================

	string str_name; // declaration

	string str = "IT'S OVER 9000";
	cout << str << endl;
	cout << "Accessing individual character like arrays with []: " << str[8] << endl;

	// updating string
	string update = "Will";
	cout << "Before : " << update << endl;
	update = "Strong";
	cout << "After: " << update << endl;

	// can change single character as well

	update[3] = 'i';
	cout << "Single character change: " << update << endl;

	char cStr[] = "C style string";

	cout << "\n"
	     << endl;
	cout << "STRING FUNCTIONS" << endl;

	//===================
	// STRING FUNCTIONS
	//===================

	string str1 = "Simply";
	string str2 = "Lovely";

	// length() - returns length of the string
	cout << "Length of str1: " << str1.length() << endl;

	// append() - adds one string at the end of another
	string str3 = str1;
	str3.append(str2);
	cout << "Append: " << str3 << endl;

	// at() - returns character at given position
	cout << "Character at index 2 in str1: " << str1.at(2) << endl;

	// front() and back() - first and last characters
	cout << "Front of str1: " << str1.front() << ", Back: " << str1.back() << endl;

	// substr() - extacts a substring
	cout << "Substring of str3 from index 6:  " << str3.substr(6) << endl;

	// find() - finds position of substring
	cout << "Find 'Love' in str3: " << str3.find("Love") << endl;

	// rfind() - finds last occurence
	string str4 = "abcabcabc";
	cout << "Last occurence of 'abc': " << str4.rfind("abc") << endl;

	// replace() - replaces part of the string
	string str5 = "I love chicken butter masala";
	str5.replace(7, 7, "paneer"); // str.replace(pos, len, new_subtr)
	cout << "Replace: " << str5 << endl;

	// erase() - removes part of the string
	string str6 = "YouNoob";
	str6.erase(3); // removes from index 3
	cout << "Erase: " << str6 << endl;

	// insert() - inserts string at given index
	string str7 = "Big";
	str7.insert(3, " Boyyy");
	cout << "Insert: " << str7 << endl;

	// empty() - checks if string is empty
	string str8 = "";
	cout << (str8.empty() ? "The void is silent..." : "We have a name, Commander!") << endl;

	// compare() - compares two strings (returns 0 if equal)
	cout << "Compare 'BigBoyyy' and 'SmallBoyyy' " << str7.compare("SmallBoyyy") << endl;
	cout << "Compare 'fish' and 'fish' " << string("fish").compare("fish") << endl;

	// clear() - clears the entire string
	str2.clear();
	cout << "str2 after clear: '" << str2 << "'" << endl;

	// push_back() and pop_back() - add/remove last character
	string str9 = "Fail";
	str9.push_back('!');
	cout << "After push_back: " << str9 << endl;
	str9.pop_back();
	cout << "After pop_back: " << str9 << endl;

	// swap() - swaps values of two strings
	string a = "dawwg", b = "meoww";
	a.swap(b);
	cout << "Swap: a = " << a << ", b = " << b << endl;

	return 0;
}

/*
=====================
  NOTES ON STRINGS
=====================
In C:
- Strings are arrays of characters terminated by the NULL character ('\0').
- The size of a character array must be declared statically.

In C++:
- Strings are represented as objects.
- Memory is allocated dynamically.
- Comes with powerful member functions for manipulation.
*/