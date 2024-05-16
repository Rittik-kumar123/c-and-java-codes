#include<stdio.h>

int main()
{
    int n,a=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<i;j++)
        {
            
            if(i%j==0)
            {
                count+=1;
            }
        }
        if(count==1)
        {
            printf("%d ",i);
            a++;
            if(a%20==0)
            printf("\n");
        }
        
    }
    return 0;
}