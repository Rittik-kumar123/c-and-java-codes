#include<stdio.h>
float celcius(float farenhiet);

int main()
{ 
    float degreeFarenhiet;
    printf("Temperature in Celcius: ");
    scanf("%f",&degreeFarenhiet);
    printf("Temperature in degree Farenhiet is %f",celcius(degreeFarenhiet));
    return 0;
}
float celcius(float farenhiet)
{
    float result;
    result = (farenhiet*(1.8)) + 32;
    return result;
}