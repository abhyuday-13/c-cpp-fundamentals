/* FUNCTION is like a machine that performs a specific task.
    You give it some input, and it processes that input and gives you some output.*/
// ARGUEMENTS are the inputs you give to the function.
/* Parameters: Variables defined in the function's definition
                to receive input when the function is called.*/

                 
/*
Function Definition

return_type function_name (para1_type para1_name, para2_type para2_name)
{
    // body of the function
}

Function Declaration 
Syntax -> return_type name_of_function (parameter_1, parameter_2);
*/

#include <stdio.h>

// Function that adds two numbers and returns the result
/* Function return type tells what type of value is returned after all function is executed. 
    When we don’t want to return a value, we can use the void data type.*/
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5;
    int y = 10;

    // Function call
    // Note: Function call is neccessary to bring the program control to the function definition. 
    // If not called, the function statements will not be executed.
    int result = add(x, y); // Calls the function 'add' with x and y as arguments

    printf("The result is: %d\n", result); // Output: The result is: 15

    return 0;
}

// Another example
/*
#include<stdio.h>
int returnTen()
{
return 10;
}

int main()
{
int result = returnTen();
printf("The result is => %d\n",result);
return 0;
}
*/
