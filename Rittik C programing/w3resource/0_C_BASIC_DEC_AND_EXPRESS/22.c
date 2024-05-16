#include<stdio.h>

int main()
{
    int sum=0,n[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter %dth number: ",i+1);
        scanf("%d",&n[i]);
    }
    for(int i=0;i<5;i++)
    if(n[i]%2!=0)
    {
        sum+=n[i];
    }
    printf("The sum of all odd numbers you enterd is : %d",sum);
    return 0;
}