#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number till which you want to get the prime numbers:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        int sum=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {sum+=1;}
        }
        if(sum==1)
        {printf("%d\t",i);}
    }
    return 0;
}