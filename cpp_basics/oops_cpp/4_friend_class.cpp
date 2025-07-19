#include <iostream>

using namespace std;

class Secret {
  private:
	string code = "TopSecret007";

	// Friend class
	friend class Hacker;
};

class Hacker {
  public:
	void crack(Secret s) {
		cout << "Hacked Code: " << s.code << endl;
	}
};
int main() {

	Secret secretFile;
	Hacker anonymous;

	anonymous.crack(secretFile);

	return 0;
}

/*
A friend class can access private and protected members of other classes in which it is declared as a friend.
Friendship is not inherited.

Friendship is not mutual (if A is a friend of B, B isn’t automatically a friend of A).

Friendship is not transitive (if A is friend of B, and B is friend of C, A is not friend of C).

*/