#include <stdio.h>
int main()
{
    float tax = 0, income;
    printf("Enter your income per annum:");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Total amount of tax you have to pay by the end of this yere is:%f", tax);
    return 0;
}