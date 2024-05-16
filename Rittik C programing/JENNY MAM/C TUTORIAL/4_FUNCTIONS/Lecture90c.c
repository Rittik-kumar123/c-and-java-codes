#include<stdio.h>

void sum(int,float);

void main()
{
    float x,y;
    printf("enter x and y");
    scanf("%f %f",&x,&y);
    sum(x,y);
}
void sum(int a,float b)
{
    printf("sum=%f\n",a+b);
}