// program to delete an element from an array

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array you enterd is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
    int index;
    printf("Enter the index at which you want to delete the element\n");
    scanf("%d",&index);
    if(index<=n && index>=0)
    {
        for(int i=index;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("The new array is:\n");
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}