// program to swap two numbers without using third variable.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter respective value of x and y - ");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d y=%d",x,y);
    return 0;
}