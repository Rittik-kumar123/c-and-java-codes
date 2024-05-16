#include<stdio.h>
int main()
{
    float principle,rate,time;
    printf("Enter the principle value:");
    scanf("%f",&principle);
    printf("Rate %:");
    scanf("%f",&rate);
    printf("Time duration in years:");
    scanf("%f",&time);
    printf("The SIMPLE INTEREST = %f\n",principle*rate*time/100);
    printf("The total amount is:%f",principle*rate*time/100 + principle);
    return 0;
}