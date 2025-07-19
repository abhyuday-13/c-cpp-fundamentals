//Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//Referenced from ChatGPT
#include<stdio.h>

int main() 
{
    float basicSalary, HRA, DA, grossSalary;

    // Input the basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on the basic salary
    if(basicSalary <= 10000) 
    {
        HRA = 0.20 * basicSalary;  // HRA = 20% of basic salary
        DA = 0.80 * basicSalary;   // DA = 80% of basic salary
    } 
    else if(basicSalary <= 20000) 
    {
        HRA = 0.25 * basicSalary;  // HRA = 25% of basic salary
        DA = 0.90 * basicSalary;   // DA = 90% of basic salary
    } 
    else 
    {
        HRA = 0.30 * basicSalary;  // HRA = 30% of basic salary
        DA = 0.95 * basicSalary;   // DA = 95% of basic salary
    }

    // Calculate Gross Salary
    grossSalary = basicSalary + HRA + DA;

    // Display the Gross Salary
    printf("The Gross Salary of the employee is: %.2f\n", grossSalary);

    return 0;
}
