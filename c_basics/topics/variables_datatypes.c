#include<stdio.h>
int main()
{
/* variable = Allocate space in memory to store a value.
              We refer to a variable's name to access the stored value.
              That variable now behaves as if it was the value it contains.
              But WE NEED to declare what type of data we are storing.*/  

int x; //declaration
x = 123; //intialization
int y = 321; //declaration + intialization

int age = 18; //integer %d
float gpa = 6.9; //floating point number 4 bytes (32 bits of precision) 6-7 digits %f
double d = 3.141592653589793; //8 bytes (64 bits of precision) 15- 16 digits %lf
char grade = 'C'; //single character %c 
char name[] = "Bro"; // array of characters %s

printf("\nHello %s\n", name);
printf("You are %d years old\n", age);
printf("You gpa is %f\n", gpa);
printf("Your average grade is %c\n", grade);
return 0;
}