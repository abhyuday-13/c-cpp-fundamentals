/*
Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.50
*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("\nInput 10 numbers:\n");
    
    for ( i = 1; i <=10  ; i++)     
    {
        printf("No. %d :",i);
        scanf("%d",&n);
        sum += n;   
    }
    
    avg = sum / 10;
    printf("The sum of the given 10 number is : %d\nThe Average is : %.2f\n",sum,avg);
    
    return 0;
}