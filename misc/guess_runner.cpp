#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

	srand(time(0));

	int guess;
	int chance;
	char playAgain;

	do {
		system("CLS");

		int random = rand() % 100 + 1;
		// % 100 gives number from 0 to 99
		// + 1 shifts the range to 1 to 100

		chance = 0;

		cout << R"(
       ________  __________________    ____  __  ___   ___   ____________ 
      / ____/ / / / ____/ ___/ ___/   / __ \/ / / / | / / | / / ____/ __ \
     / / __/ / / / __/  \__ \\__ \   / /_/ / / / /  |/ /  |/ / __/ / /_/ /
    / /_/ / /_/ / /___ ___/ /__/ /  / _, _/ /_/ / /|  / /|  / /___/ _, _/ 
    \____/\____/_____//____/____/  /_/ |_|\____/_/ |_/_/ |_/_____/_/ |_|  
                                                                        
                                                                      )"
		     << endl;
		cout << "\n<============================>\n";
		cout << "         GUESS RUNNER \n";
		cout << "<============================>\n\n";
		cout << "Guess the number between 1 and 100\n";
		cout << "Enter your guess below:\n\n";

		do {
			cout << "Your guess: ";
			// cin >> guess;
			if (!(cin >> guess)) {
				cout << "Please enter a valid number!\n\n";
				cin.clear();             // Clear the error flag on cin
				cin.ignore(10000, '\n'); // Discard invalid input up to newline
				continue;                // Go back to start of the loop to ask again
			}

			if (guess < 1 || guess > 100) {
				cout << "Please enter a number between 1 and 100!\n\n";
				continue;
				cout << endl;
			}
			if (guess == random) {
				cout << "\n YOU NAILED IT! \n";
				cout << "YOU SIR ARE A FISH HAHAHAHA!! \n";
				cout << "Total attempts: " << chance + 1 << "\n";
			} else {
				if (guess < random) {
					cout << " Get HIGH..ahem..I mean try higher\n\n";
				} else {
					cout << " Too high SON..get low!!\n\n";
				}
				chance++;
			}
		} while (guess != random);

		cout << "\nDo you want to play again? (y/n): ";
		cin >> playAgain;

	} while (playAgain == 'y' || playAgain == 'Y');

	cout << R"(   
   _______
  /       \
 |  GAME   |
 |  OVER   |
  \_______/
    (x_x)
   <)   )>
    /   \
)" << endl;

	return 0;
}

// rand() is used to generate a series of random numbers within the range [0,RAND_MAX]
// random number is generated using an algorithm that takes 1 as the seed or starting point
// srand() changes the "seed" or the starting point of the algorithm
// time(0) returns the current time in seconds since the Unix epoch (Jan 1, 1970)

/*
INPUT VALIDATION ->
cin >> guess  tries to read an integer
if invalid, cin fails and sets an error flag
clear() resets error flag to continue using cin
ignore() skips invalid characters left in input buffer
continue skips the rest of this iteration and asks the user to enter the guess again
*/

/*
ASCII ART USAGE ->
cout << R"(....)" uses raw string literals
it prints multi-line text exactly as it is, without worrying about escape characters
*/