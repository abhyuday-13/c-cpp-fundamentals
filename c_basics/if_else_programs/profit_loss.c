//Write a C program to calculate profit or loss.
#include<stdio.h>
int main()
{
    float CP,SP,Profit,Loss,ProfitPercentage,LossPercentage;
    printf("\nEnter Cost Price =>");
    scanf("%f",&CP);
    printf("Enter Selling Price =>");
    scanf("%f",&SP);

    //Main Profit or Loss Calculation
    if (SP > CP)
    {
        Profit = SP - CP;
        printf("Profit = Rs.%.2f",Profit);
        ProfitPercentage = (Profit/CP)*100;
        printf("\nYou made a PROFIT of %.2f%%",ProfitPercentage);
    }
    else if (SP < CP)
    {
        Loss = CP - SP;
        printf("Loss = Rs.%.2f",Loss);
        LossPercentage = (Loss/CP)*100;
        printf("\nYou incurred a LOSS of %.2f%%",LossPercentage);

    }
    else{
        printf("Neither Profit nor Loss");
    }

    

    
    return 0;
}