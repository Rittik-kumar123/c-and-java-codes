#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    for(int i=1;i<=100;i++)
    {
        if(i%n==3)
        {
            printf("%d ",i);
        }
    }
    return 0;
}