#include<stdio.h>

int main()
{
    int a[]={1,2,3,5,6,8};
    int *p=a;

    //printf("%d %d\n",*++p,*++p);
    //printf("%d %d\n",*p++,*p++);
    printf("%d %d\n",(*p)++,(*p)++);
    return 0;
}