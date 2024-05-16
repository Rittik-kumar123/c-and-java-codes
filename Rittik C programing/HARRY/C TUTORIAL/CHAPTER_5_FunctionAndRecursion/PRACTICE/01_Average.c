#include<stdio.h>
float average(int a , int b , int c);
int main()
{
    float a,b,c;
    printf("Enter 1st number: \n ");
    scanf("%f",&a);
    printf("Enter 2nd number: \n ");
    scanf("%f",&b);
    printf("Enter 3rd number: \n ");
    scanf("%f",&c);
    printf("The average of the three numbers you entered is: %f",average(a,b,c));

    return 0;
}
float average(int a , int b , int c)
{
    float result;
    result = (float)(a+b+c)/3; /* here we have to typecast float as we have earlier declared to 
                                  take input integers in the functions and we know that integers have
                                  no digits after decimal so we have typecasted int to float*/ 
    return result;
}