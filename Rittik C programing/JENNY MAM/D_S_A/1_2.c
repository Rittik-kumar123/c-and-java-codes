// program to inset an element in a array.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array you want to enter!\n");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array you entered is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
    int index,num;
    printf("Enter the index at which you want to enter a new element:\n");
    scanf("%d",&index);
    printf("Enter the number you want to enter:\n");
    scanf("%d",&num);
    if(index<=n-1)
    {
        for(int i=n-1;i>=index;i--)
        {
            a[i+1]=a[i];
        }
        a[index]=num;
        printf("The new array is:\n");
        for(int i=0;i<n+1;i++)
        {
            printf("%d ",a[i]);
        }

    }
    else
    {
        printf("Insertion is Not possible");
    }
    
    return 0;
}