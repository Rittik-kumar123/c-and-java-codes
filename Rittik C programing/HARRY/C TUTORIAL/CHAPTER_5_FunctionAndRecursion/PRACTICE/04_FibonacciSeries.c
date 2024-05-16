   /* HERE WE ARE USING RECURSION IN FUNCTION. FIBONACCI SERIES: 0,1,1,2,3,5,8,13,21,...... */
#include<stdio.h>
int Fibonacci(int n);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("The number at %dth position in the Fibonacci number series is %d",a,Fibonacci(a));
    return 0;
}
int Fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-2)+Fibonacci(n-1);
    }
}
