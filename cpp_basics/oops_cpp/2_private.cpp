#include <iostream>

using namespace std;

class BankAccount {
  private:
	double balance;

  public:
	BankAccount(double initialBalance) {
		if (initialBalance >= 0)
			balance = initialBalance;
		else
			balance = 0;
	}

	// public method to access private data
	double getBalance() {
		return balance;
	}

	void deposit(double amount) {
		balance += amount;
	}

	void withdraw(double amount) {
		balance -= amount;
	}
};

int main() {

	BankAccount myAccount(38500);

	cout << "Current Balance: " << myAccount.getBalance() << endl;

	myAccount.deposit(1500);
	cout << "Balance after deposit: " << myAccount.getBalance() << endl;

	myAccount.withdraw(10000);
	cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

	return 0;
}
/*
- cannot be accessed directly from outside the class
- it is used for data hiding
- control how data is accessed/modified via public functoins
- no external code can mess with your internal data directly
*/