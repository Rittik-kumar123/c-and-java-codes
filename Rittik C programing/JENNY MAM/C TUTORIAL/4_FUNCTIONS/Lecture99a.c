#include<stdio.h>

int* returnpointer(int[]);

int main()
{
    int a[]={1,2,3,4,5},*p;
    p=returnpointer(a);
    //a=a+2;  --> we can't modify a as a is a constant pointer which is pointing to the base address
    //            of the array.
    printf("%d\n",*p);
    return 0;
}
int* returnpointer(int a[])
{
    a=a+2;
    return a;
}