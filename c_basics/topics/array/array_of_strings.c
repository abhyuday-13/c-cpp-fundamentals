// EXAMPLE 1

#include <stdio.h>
#include <string.h>
int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Impala"};

    // cars[0] = "Tesla";            // You can't use this in case of strings INSTEAD
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
//END
    return 0;
}

// EXAMPLE 2 - SWAPPING VALUES OF TWO VARIABLE

#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = "blue";
    char y[] = "purple";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);
//END
/*
If i put char y[] = red 
then output ->
x = 
y = blue
To fix this issue make both the character arrays of same size 
*/
    return 0;
}