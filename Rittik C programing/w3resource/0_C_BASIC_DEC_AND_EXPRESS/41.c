#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            sum+=1;
            printf("%d ",sum);
        }printf("\n");
    }
    return 0;
}