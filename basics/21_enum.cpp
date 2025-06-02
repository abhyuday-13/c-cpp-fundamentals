#include <iostream>

using namespace std;

//  enum - user defined data type that assigns names to a set of integer constants

enum Weekday {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

// Enum with custom starting values
enum Level {
	Low = 1,
	Medium,
	High = 10,
	Ultra
};

enum class Color {
	Red,
	Green,
	Blue
};

int main() {

	// Using traditional enum
	Weekday today = Wednesday;

	if (today == Wednesday) {
		cout << "It's Wednesday, my dudes" << endl;
	}

	// Output the enum value (prints the underlying int value)
	cout << "Today is day number: " << today + 1 << endl;

	// Using enum with custom variables
	Level danger = Ultra;
	cout << "Danger Level: " << danger << endl;

	// enum in switch statements
	switch (danger) {
	case Low:
		cout << "Low Danger. You NOOB" << endl;
		break;
	case Medium:
		cout << "Medium Danger. Ehh git gud" << endl;
		break;
	case High:
		cout << "High Danger. You look like a  Professional" << endl;
		break;
	case Ultra:
		cout << "Stay Frosty Soldier !! May the fourth be with you." << endl;
		break;
	default:
		break;
	}

	// enum class
	Color favoriteColor = Color::Blue;
	if (favoriteColor == Color::Blue) {
		cout << "Blue is calming color" << endl;
	}

	// enum class values need casting to print as integers
	cout << "Enum class Blue has value: " << static_cast<int>(Color::Blue) << endl;

	return 0;
}