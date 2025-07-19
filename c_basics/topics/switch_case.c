// switch = A more efficient altnerative for "else if" statements

/* SYNTAX ->
switch(expression)
{
case value1: statement_1;
             break;
case value2: statement_2;
             break;
.
.
.
case value_n: statement_n;
              break;
default: default_statement;
}
*/

/* Rules of the switch case statement
Following are some of the rules that we need to follow while using the switch statement:

1.In a switch statement, the “case value” must be of “char” and “int” type.
2.There can be one or N number of cases.    
3.The values in the case must be unique.
4.Each statement of the case can have a break statement. It is optional.
5.The default Statement is also optional.
*/
// The default keyword is used to specify the set of statements to execute if there is no case match.

/* EXAMPLE ->
#include<stdio.h>
int main()
{
    char grade;
    printf("\nEnter your grade => ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!!\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("Padhle bsdk");
        break;
    case 'D':
        printf("Padhle bsdk...Bakchodi karne se ghar nhi chalega");
        break;
    case 'F':
        printf("error.exe");
        break;

    default:
        printf("Please enter only valid grades!");
        break;
    }
    return 0;
}
*/

/*Using Range in Switch Case 

Syntax -> case low ... high:
// Correct  -   case 1 ... 5: 
// Wrong -    case 1...5: 

Example ->
#include<stdio.h>
int main()
{
    int arr[] = {1, 5, 15, 20};

	for (int i = 0; i < 4; i++)
	{
		switch (arr[i])
		{
			// range 1 to 6
		case 1 ... 6:
			printf("%d in range 1 to 6\n", arr[i]);
			break;
			// range 19 to 20
		case 19 ... 20:
			printf("%d in range 19 to 20\n", arr[i]);
			break;
		default:
			printf("%d not in range\n", arr[i]);
			break;
		}
	}
    return 0;
}

OUTPUT :- 
1 in range 1 to 6
5 in range 1 to 6
15 not in range
20 in range 19 to 20
*/