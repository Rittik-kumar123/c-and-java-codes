#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of elements you want to store - ");
    scanf("%d",&n);
    int a[n]; 
    printf("Enter the elements - \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    for(int i=0;i<n/2;i++)
    {
        m=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=m;
    }
    printf("The number in reverser mode are - \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}