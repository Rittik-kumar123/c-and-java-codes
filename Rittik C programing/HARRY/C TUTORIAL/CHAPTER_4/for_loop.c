#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("The value of i is : %d\n",i);
    }
    return 0;
}