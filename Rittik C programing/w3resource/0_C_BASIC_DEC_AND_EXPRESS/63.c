#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=pow(i,4);
    }
    printf("%d",sum);
    return 0;
}