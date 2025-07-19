#include <iostream>

using namespace std;

class Player {
  private:
	// Private variables - only accessible inside the class
	string name;
	int health;
	int score;

  public:
	// Constructor - gets called when we create a new object
	Player(string playerName, int playerLevel) {
		name = playerName;
		health = 100; // default full health
		score = 0;
	}

	// 🛡️ Function to reduce health
	void takeDamage(int damage) {
		health -= damage;
		if (health < 0) {
			health = 0;
		}
		cout << name << " took " << damage << " damage.\n"
		     << endl;
	}

	// 💉 Function to heal the player
	void heal(int amount) {
		health += amount;
		if (health > 100) {
			health = 100;
		}
		cout << name << " healed by " << amount << ".\n"
		     << endl;
	}

	// 🪙 Function to add score
	void addScore(int points) {
		score += points;
		cout << name << " scored " << score << endl;
	}

	// 📊 Function to show current stats
	void showStats() {
		cout << "\n Player Stats:\n";
		cout << "Name   : " << name << endl;
		cout << "Score  : " << score << endl;
		cout << "Health : " << health << endl;
	}

	//----------------------------------------------
	~Player() {
		cout << "\nPlayer \"" << name << "\" has left the game.\n";
	} // Destructor is another special member function that is called by the compiler when the scope of the object ends. It deallocates all the memory previously used by the object of the class so that there will be no memory leaks. The destructor also has the same name as the class but with tilde (~) as prefix.
	//----------------------------------------------
};

int main() {

	Player player1("bigpp_13", 99);
	player1.showStats();

	Player player2("tambakhu_smasher", 69);
	player2.showStats();

	cout << "\n\n3....2.....1... FIGHT !!!\n"
	     << endl;

	player2.takeDamage(30);
	player2.heal(10);
	player2.showStats();

	return 0;
}
/*
Player is a class, and player1, player2 are objects of that class.

private: hides data from direct access.

public: allows interaction through functions (methods).

Constructors help initialize object values.
*/

/*
Sometimes it is better to declare the method in the class and define it later (especially in large programs).

class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}
*/

/*
Constructors are special class members which are called by the compiler every time an object of that class is instantiated.
They are used to construct the objects and making them ready for use.
Constructors have the same name as the class.
*/