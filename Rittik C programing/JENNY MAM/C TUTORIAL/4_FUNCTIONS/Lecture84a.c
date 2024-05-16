#include<stdio.h>

void sub()
{
    int a,b,sub=0;
    printf("Enter any two number you want to operate:");
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("sub is %d\n",sub);
}
void sum()
{
    int a,b,sum=0;
    printf("Enter any two number you want to operate:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("SUM is %d\n",sum);
    sub(); // we are calling another function in a function. 
        // we can call a function in another function but we can't define a function in any another function.
}
int main()
{
    sum();
    printf("next operation\n");
    sum();
    return 0;
}