// for loop -> repeats a section of code a limited amount of times
// first Initializes, then condition check, then executes the body and at last, the update is done.

/*SYNTAX ->
for (intialization; condition; updation)
{
    //
    //body for the loop
    //
}
*/

//  Initialization Expression: In this expression, we assign a loop variable or loop counter to some value.
//  Test Expression: In this expression, test conditions are performed. If the condition evaluates to true then the loop body will be executed and then an update of the loop variable is done. 
//  If the test expression becomes false then the control will exit from the loop.
//  Update Expression: After execution of the loop body loop variable is updated by some value it could be incremented, decremented, multiplied, or divided by any value.

/*EXAMPLE ->
#include<stdio.h>
int main(){
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ",i);
        
    }
    
    return 0;
}
*/
