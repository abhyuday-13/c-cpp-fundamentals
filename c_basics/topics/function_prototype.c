#include<stdio.h>

void hello(char[], int); //function prototype

//Function declaration, w/o a body, before main()
//Ensures that calls to a function are made with the correct arguements

// Driver Code
int main()
{
    char name[] = "Abhyuday";
    int age = 18;
    
    // Function Call
    hello(name,age);
    //If one arguement is used you'll receive error
    return 0;
}

// Function definition
void hello(char name[],int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);   
}

//Many C compilers do not check for parameter matching
//Missing arguements will result in unexpected behaviour
//A function prototype causes the compiler to flag an error if arguements are missing

/* ADVANTAGES
1. Easier to navigate a program with main() at top
2. Helps with debugging
3. Commonly used in header files */
