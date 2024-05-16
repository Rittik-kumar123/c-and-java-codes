// assignment given.

#include<stdio.h>

void sum(void);
void sub(void);
void mult(void);
void div(void);

void main()
{
    sum();
    sub();
    mult();
    div();
}   

void sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d\n",sum);
}
void sub()
{
    int a=5,b=7,sub=0;
    sub=a-b;
    printf("sub=%d\n",sub);
}
void mult()
{
    int a=5,b=7,mult=0;
    mult = a*b;
    printf("mult=%d\n",mult);
}
void div()
{
    float a=5,b=7,div=0;
    div=a/b;
    printf("div=%f\n",div);
}