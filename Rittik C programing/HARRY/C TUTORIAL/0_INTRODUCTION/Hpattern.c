#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    printf("Enter the no no of columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
         if(i!=(n/2+1) || i==m)
         {printf("*");}
         if(i==(n/2+1))
         {
             for(int j=1;j<=m;j++)
             {
                 printf("*");
             }
         }
         printf("\n");
    }
    return 0;
}