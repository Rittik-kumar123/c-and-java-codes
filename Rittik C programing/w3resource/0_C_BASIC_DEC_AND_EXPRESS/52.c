#include<stdio.h>

int main()
{
    int n;
    printf("enter the number of elements you want to store - ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements you - \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int small=a[0],position=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            position=i;
        }    
    }printf("The smallest element in the string is %d\n and its index is %d\n",small,position);

    return 0;
}