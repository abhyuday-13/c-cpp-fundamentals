// ASCII VALUE OF A CHARACTER
/*
ASCII - American Standard Code for Information Interchange
Each character or special character is represented by some ASCII code.
Each ASCII code occupies 7 bits of memory.
Each character variable is assigned an ASCII value ranging from 0 to 127.

Why are ASCII Values Needed in C?
Digital computers store the information in the form of bits (0 or 1). 
So, to represent different characters, which can be very well over 200s, 
we use a sequence of bit that is stored in the memory in place of that character.
*/

// Program to find ASCII value of a character (Using Format Specifier - Implicit)
#include<stdio.h>
int main()
{
    char c = 'A';
    printf("ASCII value of %c is %d\n",c,c);

// (Using typecasting - Explicit)
    char ch = 'M';
    int asciiValue = (int)ch;
    printf("ASCII value of %c is %d\n",ch,asciiValue);
    
    return 0;
}
