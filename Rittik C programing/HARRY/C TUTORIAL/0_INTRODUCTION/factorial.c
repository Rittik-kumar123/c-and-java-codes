#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        sum=sum*i;
    }
    printf("The factorial of %d is %d",n,sum);
}