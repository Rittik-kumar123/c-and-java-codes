// INDIRECT RECURSION. --> FACTORIAL OF A NUMBER USING INDIRECT RECURSION.

#include<stdio.h>

int fun1(int);
int fun2(int);

int fun1(int n)
{
    if(n<=1) return 1;
    else return n*fun2(n-1);
}

int fun2(int n)
{
    if(n<=1) return 1;
    else return n*fun1(n-1);
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d\n",fun1(n));
    return 0;
}