#include <stdio.h>
#include <string.h>
int main()
{
    char username[50];
    while (1)
    {
        printf("\nInput Username (8 characters long) =>");
        scanf("%s", &username);
        if (strlen(username) >= 8)
        {
            printf("Username Accepted!");
            break;
        }
        else
        {
            printf("PLEASE ENTER VALID USERNAME");
        }
        while (getchar() != '\n');  //Clear the input buffer to handle any remaining characters
        
    }
    return 0;
}

//If user input is more than 50 then scanf will take the additional value next time
//   to clear that buffer we use getchar
//getchars is a standard library function that takes a single input character from standard input

/*
How the Buffer Clearing Works:
The while (getchar() != '\n'); loop reads each remaining character in the buffer one by one 
until it encounters the newline character (\n).
When it reaches \n, the condition getchar() != '\n' becomes false, and the loop exits.
This effectively "flushes" out all remaining characters, 
ensuring the input buffer is empty before the next prompt.
*/


/* MADE BY ANTARIKSH
#include <stdio.h>
#include <string.h>
int main()
{
    char username[24];
    do
    {
        printf("Input username: ");
        scanf("%s", &username);
    } while (strlen(username) < 8);
    return 0;
}
*/