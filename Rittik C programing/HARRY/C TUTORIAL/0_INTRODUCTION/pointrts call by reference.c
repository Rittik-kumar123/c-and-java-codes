#include<stdio.h>
void swap (int x,int y);
void main()
{
    int a=10,b=20;
    printf("Before swap:%d,%d",a,b);
    swap(&a,&b);
    printf("After swap:%d,%d",a,b);
};
void swap (int* x,int* y);
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swap :    %d  %d",*x,*y);
}