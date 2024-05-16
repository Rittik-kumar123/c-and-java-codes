#include<stdio.h>
int m[64][64];
// void matrix(int n,int dim[])
// {
    // int m[n][n];
    // int i,j,k,l,q=0; 
    // for(i=0;i<n;i++)
    // {
        // for(j=0;j<n;j++)
        // {
            // if(i==j)
            // {
                // m[i][j]=0;
            // }
        // }
    // }
    // for(i=2;i<=n;i++)
    // {
        // for(l=1;l<=n-i+1;l++)
        // {
            // j=l+i-1;
            // m[i][j]=9999;
            // for(k=i;k<j;k++)
            // {
                // q=m[i][k]+m[k+1][j]+dim[i-1]*dim[k]*dim[j];
                // if(q<m[i][j])
                // {
                    // m[i][j]=q;
                // }
            // }
        // }
    // }
    // printf("%d\n",m[1][n]);
// }
int main()
{
    int n,i;
    printf("Enter Number of matrices: ");
    scanf("%d",&n);
    int dim[n+1];
    for(i=0;i<n+1;i++)
    {
        scanf("%d",&dim[i]);
    }
    //matrix(n,dim);
}