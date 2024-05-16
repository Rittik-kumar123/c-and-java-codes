// TAIL AND NON TAIL RECURSION FUNCTION.

// NON TAIL RECURSION.

#include<stdio.h>
int print(int);
int print(int a)
{
    if(a<1) return 0;
    else
    return 1+print(a/2);
}

int main()
{
    int x,n;
    printf("enter a number:");
    scanf("%d",&n);
    x=print(n);
    printf("%d\n",x);
    return 0;
}