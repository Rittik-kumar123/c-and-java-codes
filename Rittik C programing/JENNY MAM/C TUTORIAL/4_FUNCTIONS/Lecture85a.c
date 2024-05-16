#include<stdio.h>

void sum(void); // we should declare datatype of arguments as void if we don't give input while calling 
                // the function.

int main()
{
    sum();    
    return 0;
}
void sum()
{
    int a,b,sum=0;
    printf("Enter any two number:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}