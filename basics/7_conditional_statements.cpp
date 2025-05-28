#include <iostream>
using namespace std;

/*
if: Run code when a condition is true.

if-else: Choose between two paths.

if-else if-else: Multiple conditions, only one branch executes.

Nested if: if inside another if — good for checking multiple levels.

switch: Cleaner way to handle multi-choice values like menu options.
*/

int main() {
    // Declare some variables for demonstration
    int number;

    // Ask user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    // -------------------------------
    // 1. Simple if statement
    // -------------------------------
    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    // -------------------------------
    // 2. if-else statement
    // -------------------------------
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    // -------------------------------
    // 3. if-else if-else ladder
    // -------------------------------
    if (number == 0) {
        cout << "The number is zero." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is positive." << endl;
    }

    // -------------------------------
    // 4. Nested if statement
    // -------------------------------
    if (number != 0) {
        if (number % 5 == 0) {
            cout << "The number is divisible by 5." << endl;
        } else {
            cout << "The number is not divisible by 5." << endl;
        }
    }

    // -------------------------------
    // 5. switch statement
    // -------------------------------
    // Let's use a small menu to show usage of switch
    int choice;
    cout << "\nChoose an option:\n";
    cout << "1. Check if positive\n";
    cout << "2. Check if even/odd\n";
    cout << "3. Check divisibility by 3\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
    case 1:
        if (number > 0) {
            cout << "Yes, the number is positive." << endl;
        } else {
            cout << "No, the number is not positive." << endl;
        }
        break;

    case 2:
        if (number % 2 == 0) {
            cout << "The number is even." << endl;
        } else {
            cout << "The number is odd." << endl;
        }
        break;

    case 3:
        if (number % 3 == 0) {
            cout << "The number is divisible by 3." << endl;
        } else {
            cout << "The number is not divisible by 3." << endl;
        }
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
