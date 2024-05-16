#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,k;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}