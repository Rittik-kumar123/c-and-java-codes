#include<stdio.h>

int main()
{
    int *vp;

    int a = 2;
    float b = 1.33;
    char c = 'r';

    vp = &a;
    printf("a=%d\n",*vp);// this will give error as here we are not dereferencing the pointer datatype.
    printf("a=%d\n",*vp); // this will print 2 as output.
    vp = &b;
    printf("b=%f\n",*(float*)vp); // this will print 1.3300 as output.
    vp = &c;
    printf("c=%c\n",*(char*)vp);
    return 0;
}