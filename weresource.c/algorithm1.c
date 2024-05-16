#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the two number a and b\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    if (a!=b)
    {
        
        printf("value of c is %d",c);
    }
    else
    {
        d = 3*c;
        printf("value of c is %d",d);
    }
    
    return 0;

}