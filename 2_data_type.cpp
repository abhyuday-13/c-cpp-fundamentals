#include <iostream>

int main() {
    // data types specify the type of data that a variable can store. Compiler allocates some memory for that variable based on the data type used
    int var = 10;
    char c = 'A';
    bool isTrue = true;
    float f = 36.38;
    double pi = 3.1415926535;

    std::cout << '\n'
              << var << '\n'
              << c << '\n'
              << isTrue << '\n'
              << f << '\n'
              << pi << '\n'
              << std::endl;

    // data type conversion
    //  type conversion refers to process of changing one data type into another compatible one

    int n = 3;
    char C = 'C';

    std::cout << (int)C << std::endl;
    int sum = n + C;
    std::cout << sum << '\n';

    /* IMPLICIT TYPE CONVERSION --> conversion happens automatically by the compiler when needed.
    #include <iostream>
    using namespace std;

    int main() {

    int i = 10;
    char c = 'a';

    // c implicitly converted to int. ASCII
    // value of 'a' is 97
    i = i + c;

    // x is implicitly converted to float
    float f = i + 1.0;

    cout << "i = " << i << endl
         << "c = " << c << endl
         << "f = " << f;

    return 0;
}
*/

    /* EXPLICIT TYPE CONVERSION --> also called type casting; it is done manually by the programmer.
    we will learn about this in later module
    */

    // we can use sizeof operator to find the size of the data type
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    // data type modifiers are the keywords used to change or give meaning to already existing data types.
    // There are four types : short, long, signed, unsigned,

    return 0;
}