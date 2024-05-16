#include<stdio.h>
#include<conio.h>
void swap (int* x,int* y);
main()
{
    int a=10,b=20;
    printf("Before swap:%d,%d\n",a,b);
    swap(&a,&b);
    printf("After swap:%d,%d\n",a,b);
    return 0;
}
void swap(int* x,int* y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
    printf("After swap:%d,%d\n",*x,*y);
}