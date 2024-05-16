#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,k;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<(2*i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}