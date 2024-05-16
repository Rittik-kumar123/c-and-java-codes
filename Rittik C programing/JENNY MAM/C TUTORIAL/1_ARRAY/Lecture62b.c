#include<stdio.h>
#define N 50  // this is marcos, means we take size of matrix according to the user. Any row or column or row
              // should not exeed 50 as we have alloted 50 in marcos.

int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q;
    printf("Enter the no of size of row and column for first matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter thw number of rows and columns for 2nd matrix:\n");
    scanf("%d %d",&p,&q);
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The first matrix you entered is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    printf("\n");
    printf("The second matrix you entered is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }printf("\n");
    }printf("\n");
    if(n!=p)
    {
        printf("Multiplication of these two matrix you entered is not possible:");
    }
    else
    {
        // the resultant matrix will be of order (mXq). 
        for(i=0;i<m;i++)
        {
             int sum=0;
            for(j=0;j<q;j++)
            {
                for(k=0;k<m;k++) // we have used k for multiplication purpose.
                {
                    sum=a[i][k] * b[k][j];
                }c[i][j]=sum;
            }
        }
    }
    printf("\nThe resultant matrix multiplication is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
    return 0;
}