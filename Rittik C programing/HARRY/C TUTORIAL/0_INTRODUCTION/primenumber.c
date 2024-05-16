#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

    }
    if(sum==1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}