   /*if the sum of the factors of a number (less than the number itself) is equal to the number 
    then number is considered as a perfect number*/
#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
}