#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {

    // getline() to read full line including spaces.
    string name;
    cout << "Enter your full name -> ";
    getline(cin, name);
    cout << "Hello, " << name << endl;

    // get() to read a single character,including whitespace.
    char ch;
    cout << "Enter any character: ";
    cin.get(ch);
    cout << "Character read using get(): '" << ch << "'" << endl;

    // cin.ignore() ignores a specified number of characters or until a specified delimiter is encountered.
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    /*the above code means that it will ignore characters until you hit a newline or until you've ignored the maximum number of charcaters possible.
    std::numeric_limits<T> is a template class in C++
    -> gives information about the properties of a numeric data type T.

    std::streamsize
    -> it's a signed integral type used by streams to represent the size of characters or number of characters read/written.add_rvalue_reference

    .max() represents the maximum representable value for that type.

    */

    // getline() for C-style char array input
    char sentence[100];
    cout << "\nEnter a sentence: ";
    cin.getline(sentence, 100);
    cout << "You entered: " << sentence << endl;

    // peek() returns the next character from the input stream without extracting it.
    cout << "\nType a character: ";
    char peeked = cin.peek();
    cout << "Peeked character: '" << peeked << "'" << endl;
    /*
    A B C \n ← what the user typed

    cin.peek() returns 'A', but the buffer still has: A B C \n

    cin.get() would return 'A', but now the buffer is: B C \n
    */

    // actually read the character
    char temp;
    cin >> temp;

    // putback() to return a character into the stream.
    cin.putback(temp);
    char again;
    cin >> again;
    cout << "After putback, read again: " << again << endl;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // read() to read a fixed number of characters
    char input[6] = {0};
    cout << "\nEnter at least 5 characters: "; // Reads exactly 5 bytes
    cin.read(input, 5);
    cout << "using cin.read(): ";
    for (int i = 0; i < 5; i++) {
	cout << input[i];
    }
    cout << endl;

    // gcount() to get the number of characters read.
    cout << "Characters read using gcount(): " << cin.gcount() << endl;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Error handling with fail(), clear(), etc.
    int num;
    cout << "\nEnter an integer: ";
    cin >> num;

    if (cin.fail()) {
	cout << "Input failed! Non-integer entered." << endl;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
	cout << "You entered: " << num << endl;
    }

    // Display stream state flags
    cout << "\nStream state flags: " << endl;
    cout << "cin.fail(): " << cin.fail() << endl;
    cout << "cin.eof(): " << cin.eof() << endl;
    cout << "cin.bad(): " << cin.bad() << endl;
    cout << "cin.good(): " << cin.good() << endl;

    /*
    cin.fail()	Returns true if an input operation has failed (e.g., when input doesn't match the expected type).
    cin.clear()	Clears the error flags on the input stream, allowing further operations.
    cin.eof()	Returns true if the end of the input stream has been reached.
    cin.bad() Returns true if there is a fatal error e.g. disk failure, stream corrupted, input device not working properly.
    cin.good() Returns true if everything is okay with the stream
    */

    return 0;
}