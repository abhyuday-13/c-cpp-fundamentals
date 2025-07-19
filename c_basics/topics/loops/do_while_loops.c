// do while loop => always executes a block of code once, THEN checks a condition

/*It is a form of an exit-controlled or post-tested loop where
  the test condition is checked after executing the body of the loop.*/

/*SYNTAX ->
            do{
            //body of do while loop
        }while (condition);
*/

/*EXAMPLE ->
#include<stdio.h>
int main()
{
    int number = 0, sum = 0;
    do{
        printf("Enter a number above 0 =>");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    }while(number > 0);
        printf("sum: %d",sum);
    return 0;
}
*/

/*NESTED EXAMPLE ->
#include <stdio.h>
int main()
{
    // declaring loop variables
    int i = 0, j;
    int count = 0;

    // outer loop starts
    do
    {
        j = 0;

        // inner loop starts
        do
        {
            printf("%d ", count++);
            j++;
        } while (j < 3);
        // inner loop ends

        printf("\n");
        i++;
    } while (i < 3);
    // outer loop ends

    return 0;
}
*/
