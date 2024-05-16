#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of elements!");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=0)
        a[i]=100;
    }printf("The elements you entered are:");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}