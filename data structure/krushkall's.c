#include<stdio.h>
#include<stdlib.h>
int cost[100][100];
int parent[100];
void main()
{
    int n,i,j,ne=1,min,a,b,u,v,mincost=0;
    printf("Enter The number of nodes: ");
    scanf("%d",&n);
    printf("Enter the cost: \n");
    for(i=1;i<=n;i++)
    {
        parent[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(cost[i][j]==0)
                {
                    cost[i][j]=999;
                }
            }
    }
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                    if(cost[i][j]<min)
                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
            }
        }
        while(parent[u]!=0)
        {
            u=parent[u];
        }
        while(parent[v]!=0)
        {
            v=parent[v];
        }
        if(u!=v)
        {
            printf("%d %d %d %d\n",ne++,a,b,min);
            mincost+=min;
            parent[v]=u;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("mincost is : %d",mincost);
}