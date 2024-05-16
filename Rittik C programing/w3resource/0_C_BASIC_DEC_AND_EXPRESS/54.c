// program to convert centimeter into inches.
#include<stdio.h>

int main()
{
    float n;
    printf("Enter the length in centimeter - ");
    scanf("%f",&n);
    float inch;
    printf("in inch - %.2f",n/2.54);

    return 0;
}