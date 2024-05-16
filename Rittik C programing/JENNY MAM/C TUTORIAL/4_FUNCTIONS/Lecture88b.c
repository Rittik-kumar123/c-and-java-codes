#include<stdio.h>

void sum();

void main()
{
    sum(5,4);  // here we are trying to give input arguments to the sum function but we have not decalared
               // any variable in the defination of the functoin so although we are giving input it is not
               // coping to the defination sectoion.
}

void sum(void)
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d\n",sum);
}