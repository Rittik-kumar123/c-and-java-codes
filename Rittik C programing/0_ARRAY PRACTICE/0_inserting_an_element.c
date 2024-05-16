#include<stdio.h>
#include<string.h>
int main()
{
    int arr[20],size,element,location;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the element at %d postion of the array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert:");
    scanf("%d",&element);
    printf("Enter the index at which you want to insert the element:");
    scanf("%d",&location);
    printf("The old array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
    for(int i=size-1;i>=location;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[location]=element;
    printf("The new array you entered is:\n");
    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}