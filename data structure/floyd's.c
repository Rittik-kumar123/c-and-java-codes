#include<stdio.h>
#include<stdlib.h>
int adj[20][20],path[20][20];
int mini(int a,int b)
{
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void display(int adj[20][20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n,i,j,k;
    printf("Enter Number of vertices : ");
    scanf("%d",&n);
    printf("Enter the elements in adjecency matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    display(adj,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(adj[i][j]==999)
            {
                path[i][j]=999;
            }
            else
            {
                path[i][j]=adj[i][j];
            }
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                path[i][j]=mini(path[i][j],path[i][k]+path[k][j]);
            }
        }
        printf("for k = %d\n",k+1);
        display(path,n);
    }
}