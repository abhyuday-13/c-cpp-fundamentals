#include <iostream>

using namespace std;

int main() {

	/*

	Syntax ->
	for (initialization; condition; updation) {
	    //code block
	}


	initializtion -> loop variable to some initial value  before execution
	condition -> defines the condition for execution code block
	updation -> updates the loop variable after execution

	*/
	for (int i = 0; i < 10; i++) {
		cout << "You sir, are a fish !!" << endl;
	}

	/*
	Infinite Loop - no parameters given
	for (;;) {
	    cout << "gfg" << endl;
	}
	*/
	return 0;
}