#include <iostream>
#include <limits>   // For std::numeric_limits
#include <string>   // For std::string

using namespace std;

int main() {
    // 1. Basic input using >>
    int age;
    cout << "Enter your age: ";
    cin >> age; // Stops at whitespace
    cout << "You entered: " << age << endl;

    // Clear input buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // 2. getline() to read a full line including spaces
    string name;
    cout << "\nEnter your full name: ";
    getline(cin, name);
    cout << "Hello, " << name << endl;

    // 3. get() to read a single character (including whitespace)
    char ch;
    cout << "\nEnter any character: ";
    ch = cin.get();
    cout << "Character read using get(): '" << ch << "'" << endl;

    // Clear buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // 4. getline() for C-style char array input
    char buffer[100];
    cout << "\nEnter a sentence: ";
    cin.getline(buffer, 100);
    cout << "You entered: " << buffer << endl;

    // 5. peek() to look at the next character in input buffer
    cout << "\nType a character (we'll peek at it): ";
    char peeked = cin.peek(); // Waits for input to buffer
    cout << "Peeked character: '" << (char)peeked << "'" << endl;

    // Now actually read the character
    char temp;
    cin >> temp;

    // 6. putback() to return a character into the stream
    cin.putback(temp); // Put it back
    char again;
    cin >> again;
    cout << "After putback, read again: " << again << endl;

    // Clear buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // 7. read() to read a fixed number of characters
    char binInput[6] = {0}; // +1 space for null terminator
    cout << "\nEnter at least 5 characters: ";
    cin.read(binInput, 5); // Reads exactly 5 bytes
    cout << "Using cin.read(): ";
    for (int i = 0; i < 5; ++i) {
        cout << binInput[i];
    }
    cout << endl;

    // Number of characters read
    cout << "Characters read using gcount(): " << cin.gcount() << endl;

    // Clear buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // 8. Error handling with fail(), clear(), etc.
    int num;
    cout << "\nEnter an integer: ";
    cin >> num;

    if (cin.fail()) {
        cout << "Input failed! Non-integer entered." << endl;
        cin.clear(); // Clear the error state
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Flush bad input
    } else {
        cout << "You entered: " << num << endl;
    }

    // Display stream state flags
    cout << "\nStream state flags:" << endl;
    cout << "cin.fail(): " << cin.fail() << endl;
    cout << "cin.eof(): " << cin.eof() << endl;
    cout << "cin.bad(): " << cin.bad() << endl;
    cout << "cin.good(): " << cin.good() << endl;

    return 0;
}
