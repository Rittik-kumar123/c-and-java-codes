#include<stdio.h>
#include<string.h>
int main()
{
    float a=10,b=11;
    float *p,*q;
    p=&a;
    q=&b;
    *p=*q;
    printf("a=%f %f %f",a,*p,*q);
    return 0;
}