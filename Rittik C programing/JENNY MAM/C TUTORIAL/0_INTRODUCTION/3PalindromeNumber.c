#include<stdio.h>

int main()
{
    int a,b,sum=0,temp;

    printf("Enter a number:");
    scanf("%d",&a);

    temp=a;
    while(a>0)
    {
        b=a%10;
        sum=sum*10+b;
        a=a/10;
    }
    if(sum==temp)
    {printf("Palindrome number!");}
    else printf("not a palindrome number!");
    return 0;
}