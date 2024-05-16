#include<stdio.h>

int main()
{
    int a;
    a=10;
    int *p;
    p=&a;
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%p\n",p);

    return 0;
}