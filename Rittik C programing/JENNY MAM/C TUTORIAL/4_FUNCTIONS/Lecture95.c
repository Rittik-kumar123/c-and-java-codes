// GATE 2016

#include<stdio.h>
void f(int *p, int m)
{
    m=m+5;
    *p=*p+m;
    return ;
}
int main()
{
    int i=5,j=10;
    f(&i,j);
    printf("%d\n",i+j);
    return 0;
}