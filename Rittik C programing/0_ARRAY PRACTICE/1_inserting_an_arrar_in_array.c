#include<stdio.h>
#include<string.h>
int main()
{
    int arr1[30],arr2[20],size1,size2,index;
    printf("Enter the size of parnet array:");
    scanf("%d",&size1);
    for(int i=0;i<size1;i++)
    {
        printf("Enter the elements at %d position of parent array:",i+1);
        scanf("%d",&arr1[i]);
    }printf("\n");

    printf("Enter the index from where you want to insert daughter array in parent array:");
    scanf("%d",&index);

    printf("Enter the size of daughter array:");
    scanf("%d",&size2);
    if(size1+size2>30)
    {
        printf("The size of daughter array is large!");
        return;
    }
    else
    {
        for(int i=0;i<size2;i++)
        {
            printf("Enter the element at %d position of daughter array:",i+1);
            scanf("%d",&arr2[i]);
        }
        
        for(int i=size1-1;i>=index;i--)
        {
            arr1[i+size2]=arr1[i];
        }
        for(int i=0;i<size2;i++)
        {
            arr1[i+index]=arr2[i];
        }
        printf("The modified array is:\n");
        for(int i=0;i<size1+size2;i++)
        {
            printf("%d ",arr1[i]);
        }

    }
    return 0;
}