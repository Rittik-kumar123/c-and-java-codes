#include<stdio.h>
int x[64],count;
char c[64][64];
int place(int x[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(x[i]==x[n] || i-x[i]==n-x[n] || i+x[i]==n+x[n])
        {
            return 0;
        }
    }
    return 1;
}
void print_solution(int n,int x[])
{
    int i=0,j=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            c[i][j]='*';
        }
    }
    for(i=1;i<=n;i++)
    {
        c[i][x[i]]='Q';
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",c[i][j]);
        }
        printf("\n");
    }
}
void nqueen(int n)
{
    int k=1;
    x[k]=0;
    while(k!=0)
    {
        x[k]+=1;
        while(x[k]<=n && (!place(x,k)))
        {
            x[k]+=1;
        }
        if(x[k]<=n)
        {
            if(k==n)
            {
                count=count+1;
                printf("count=%d\n",count);
                print_solution(n,x);
            }
            else
            {
                k++;
                x[k]=0;
            }
        }
        else
        {
            k--;
        }
    }
}
void main()
{
    int n=0;
    printf("Enter the Number Of queens: ");
    scanf("%d",&n);
    nqueen(n);
}