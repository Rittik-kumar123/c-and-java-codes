#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of elements you want to store:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the firt element you want to store:");
    scanf("%d",&a[0]);
    for(int i=1;i<n;i++)
    {
        a[i]=3*a[i-1];
    }printf("The output of this program is:\n");
    for(int j=0;j<n;j++)
    {
        printf("a[%d]=%d\n",j,a[j]);
    }
    return 0;
}