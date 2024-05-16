#include<stdio.h>
int main()
{
    float c,b;
    printf("Temperature in degree celcius is:");
    scanf("%f",&c);
    b =(c*9/5)+32;
    printf("Temperature in degree faranhiet is %f",b);
    return 0;
}