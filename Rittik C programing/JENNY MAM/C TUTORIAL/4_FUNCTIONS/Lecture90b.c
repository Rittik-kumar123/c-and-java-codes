// ASSIGNMENT --> Write a function which takes one argument as input and check whether the number even/odd.

#include<stdio.h>
void evenodd(int);
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    evenodd(a);
}
void evenodd(int a)
{
    if(a%2==0)
    {
        printf("even!");
    }
    else
    {
        printf("odd!");
    }
}