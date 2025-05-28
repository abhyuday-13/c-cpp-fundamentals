#include <iostream> //header file for input/output functions

using namespace std;
/*
--> All standard C++ functions and objects (like cout,string,vector,etc.) are in 'std' namespace.
--> A namespace in C++ is a way to organize code and prevent name conflicts. They are like containers or labels for grouping related code.
--> using namespace std; means that whenever you are using something from the std namespace, you don't want to write std:: in front of it
    but you should only use this for smaller programs
*/

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
} // namespace Math

namespace mathematics {
    int add(int a, int b) {
        return a + b + 1;
    }
} // namespace mathematics

int shadow = 3000;

// main function is where the execution of program begins
int main() {

    cout << "Hello World" << endl; // This statement prints Hello World

    // Using functions with differnet namespace.
    int mathResult = Math::add(2, 3);
    int mathematicsResult = mathematics::add(2, 3);

    std::cout << "Math Result = " << mathResult << std::endl;
    std::cout << "mathematics Result = " << mathematicsResult << std::endl;

    // variables are named storage for data
    // basic syntax --> data_type variable_name = value;
    double var1 = 12.532;
    double var2 = 69.9999999;
    double var3 = var1 + var2;

    bool isStudent = true; // boolean value can only store two values i.e., true (1) or false (0)

    auto var4 = 13.812; //'auto' lets the compiler automatically deduce the type of variable; it needs an intializer (value)

    std::cout << var3 << '\n';

    // constant variable cannot be changed after intialization.
    const int num = 20;
    cout << num << '\n';

    // If two variables with same name are defined in different scopes, the compiler allows it and does not show error.
    // Whenever there is a local variable defined with same name as that of a global variable,
    // the precedence is given to the local variable. This is called variable shadowing.

    int shadow = 100;
    cout << shadow << '\n'; // Prints local variable (100)

    // you can access the global variable with same name as local variable using scope resolution operator.

    cout << ::shadow << '\n'; // Prints global variable (3000)

    return 0;
}