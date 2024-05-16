#include<stdio.h>

swap (int x,int y)
{
    int c,Z;
    c=x;
    x=y;
    y=c;
    printf("after swaping x = %d\n y=%d",x,y);
   
    return 0;
}

int main()
{
    int x,y,z;
    printf("enter two value of number:");
    scanf("%d %d",&x,&y);
    swap(x,y);
   
}