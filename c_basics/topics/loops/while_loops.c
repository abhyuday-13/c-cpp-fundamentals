// while loop -> repeats a section of code possibly unlimited times
/* Its workflow is firstly it checks the condition and then executes the body. 
Hence, a type of pre-tested loop.*/

/*SYNTAX ->
    while (test expression)
    {
        // body consisting of multiple statements
    }
*/

/*EXAMPLE -> 
#include<stdio.h>
#include<string.h>
int main()
{
    char name[25];
    printf("\nEnter your name =>");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou didn't enter your name");
        printf("\nEnter your name =>");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    printf("\nHello %s",name);
    return 0;
}
*/  


/*
Note :-
*/