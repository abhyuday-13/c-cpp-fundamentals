//ternary operator = shortcut to if/else wehen assigning/returning a value
// (condition) ? value if true : value if false

//Example 1
#include<stdio.h>
int findMax(int x,int y){
return (x > y) ? x : y; //If return is NOT used then 1 will be displayed as it is TRUE
}
int main()
{
    int max = findMax(5,4);
    printf("%d\n",max);
    return 0;
}



//Example 2
#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    int max = ( a > b ) ? a : b;
    printf("The max value is: %d\n",max);
}


//Example 3 (Nested Ternary operator)
#include<stdio.h>
int main(){
    int num = 138;
    char *result; // * is used to declare a pointer

    result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
    printf("the number is: %s\n",result);
    return 0;

}

