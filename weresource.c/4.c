#include<stdio.h>

int main ()
{
    int x,y,c;
    printf("Enter two number\n");
    scanf("%d %d",&x,&y);
    c= (x==30 || y==30 || x+y==30);
    printf("The value is %d",x==30 || y==30 || x+y==30);
    }