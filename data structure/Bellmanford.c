#include <stdio.h>
int G[20][20];
int edge[20][2];
int Bellmanford(int G[20][20],int v,int e,int edge[20][2])
{
	int i,k;
	int dist[k];
	int parent[e];
	for(i=0;i<v;i++)
	{
		dist[i]=10000;
		parent[i]=-1;
	}
	int s;
	int u;
	int v1;
	printf("Enter the Source:");
	scanf("%d",&s);
	dist[s-1]=0;
	for(i=0;i<v;i++)
	{
		for(k=0;k<e;k++)
		{
			u=edge[k][0];
			v1=edge[k][1];
			if(dist[u]+G[u][v1]<dist[v1])
			{
				dist[v1]=dist[u]+G[u][v1];
				parent[v1]=u;
				printf("parent:%d\n",parent[v1]);
			}
		}
	}
	int flag=1;
	for(k=0;k<e;k++)
		{
			u=edge[k][0];
			v1=edge[k][1];
			if(dist[u]+G[u][v1]<dist[v1])
			{
				flag=0;
			}
		}
		if(flag)
		{
			for(i=0;i<v;i++)
			printf("vertex:%d  distance:%d  parent:%d\n",i+1,dist[i],parent[i]+1);
		}
		return flag;
}
void main()
{
	int v;
	int i,j;
	int k=0;
	printf("Enter the no. of vertices:");
	scanf("%d",&v);
	G[v][v];
	printf("Enter the weight matrix:\n");
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			if(G[i][j]!=0)
			{
				edge[k][0]=i;
				edge[k++][1]=j;
			}
		}
	}
	if(Bellmanford(G,v,k,edge))
	printf("No Negative weight cycle");
	else
	printf("Negative weight cycle");
}