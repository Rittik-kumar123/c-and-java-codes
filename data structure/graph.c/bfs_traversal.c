# include<stdio.h>
# include<conio.h>
# define max 4
void bfs(int ver,int adj[ver][ver],int visited[],int start)
{
    int queue[ver],front=-1,rear=-1;
    for(int k=0;k<ver;k++)
    {
        visited[k]=0;//making elements of visted array 0.
    }
    queue[++rear]=start;
    ++front;
    visited[start]=1;
    printf("BFS Traversal\n");
    while(rear>=front)
    {
        start=queue[front++];
        printf("%d \t",start);
        for(int i=0;i<ver;i++)
        {
            if(adj[start][i] && visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
}
void dfs(int ver,int adj[ver][ver],int visited[],int start)
{
     int stack[ver],top=-1;
     for(int k=0;k<ver;k++)
     {
        visited[k]=0;
     }

     stack[++top]=start;
     visited[start]=1;
     printf("\nDFS Traversal\n");
     while(top!=-1)
     {
        start=stack[top--];
        printf("%d \t",start);
        for(int i=0;i<ver;i++)
        {
            if(adj[start][i] && visited[i]==0)
            {
                stack[++top]=i;
                visited[i]=1;
            }
        }
     }
}
int main()
{
    int ver;
    printf("Enter The vertices Of graph:");
    scanf("%d",&ver);
    int visited[max]={0};//making array for visited array that element is visited or not.
    int adj[ver][ver],i,j;
    // making adjency matrix:
    for(i=0;i<ver;i++)
    {
        for(j=0;j<ver;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    bfs(ver,adj,visited,0);//bfs traversal 
    dfs(ver,adj,visited,0);

}