#include <iostream>
#include <string>

using namespace std;

int main() {
    string realUsername = "bigpp_13";
    string realPassword = "abhyuday@13";

    string inputUsername;
    string inputPassword;

    int totalAttempts = 3;

    cout << "Please enter your login credentials -> \n"
         << "--------------------------------------" << endl;

    while (totalAttempts > 0) {
        cout << "Username: ";
        cin >> inputUsername;

        if (inputUsername == realUsername) {
            // If Username is correct, ask for password up to remaining attempts
            int passwordAttempts = totalAttempts;

            while (passwordAttempts > 0) {
                cout << "Password: ";
                cin >> inputPassword;

                if (inputPassword == realPassword) {
                    cout << "Login successful!" << endl;
                    return 0; // Exit program on success
                } else {
                    passwordAttempts--;
                    totalAttempts--; // Decrement total attempts as well
                    if (passwordAttempts > 0) {
                        cout << "Incorrect password! Attempts left: " << passwordAttempts << endl;
                    }
                }
            }

            // If Password attempts exhausted, loop back to username input
            cout << "Password attempts exhausted. Please re-enter username.\n";
        } else {
            totalAttempts--;
            if (totalAttempts > 0) {
                cout << "Incorrect username! Attempts left: " << totalAttempts << endl;
            }
        }
    }

    cout << "Too many failed attempts. Access denied." << endl;
    return 0;
}
