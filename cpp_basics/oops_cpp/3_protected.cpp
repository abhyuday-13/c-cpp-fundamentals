#include <iostream>

using namespace std;

class Animal {
  protected:
	string name;

  public:
	void setname(string n) {
		name = n;
	}
};

class Dog : public Animal {
  public:
	void bark() {
		cout << name << " says: Woof Woof !!" << endl;
	}
};

int main() {

	Dog myDog;

	myDog.setname("Tommy");
	myDog.bark();

	return 0;
}

/*
- cannot be accessed outside of its class unless with the help of friend class
- they can be accessed in derived (child) classes
*/