#include <stdio.h>
int factorial(int x);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("The value of factorial of %d is %d ",a,factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("Calling factorial(%d)\n",x);
    if (x == 1 || x == 0) /*base condition --> reference point where to end the programme. If we do not
                            specify the base condition then the programme will be running continously.*/
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);   /* here the return value of else is extracted and stored as 
                                          the outcome of factorial(a) that is a*factorial(a-1) 
                                          and again the factorial(a-1) is executed and assigned 
                                          value a*(a-1)*factorial(a-2) and thid procedd continues until
                                          the function attains factorial(1) ans the retuen value of 
                                          factorial(1) is 1*/
    }
}