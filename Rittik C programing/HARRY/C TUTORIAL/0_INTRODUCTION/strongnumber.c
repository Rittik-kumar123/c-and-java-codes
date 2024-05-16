#include<stdio.h>
#include<conio.h>
main()
{
    int n,temp,r,b,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r==n%10;
        b=1;
        for(i=a;i>0;i--)
        {
            b=b*i;
        }
        sum=sum+b;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("%d is a strong number",n);
    }
    else
    {
        printf("%d is not a strong number",n);
    }
}