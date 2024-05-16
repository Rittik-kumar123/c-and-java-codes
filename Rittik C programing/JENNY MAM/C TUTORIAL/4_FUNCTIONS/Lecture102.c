//  CALLBACK FUNCTION 

#include<stdio.h>

void sum(int a ,int b )
{
    printf("%d\n",a+b);
}

int sub(int a ,int b )
{
    printf("%d\n",a-b);
}

void display( int (*fptr)(int,int))
{
    (*fptr)(5,1);
}
int main()
{
    display(sum);
    display(sub);
    return 0;
}