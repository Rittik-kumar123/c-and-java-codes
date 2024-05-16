#include<stdio.h>
int max_heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    while(l<n && arr[l]>arr[largest])
    {
        largest=l;
    }
     while(r<n && arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        max_heapify(arr, n, largest);
    }
    
}
void heap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        max_heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        int var=arr[0];
        arr[0]=arr[i];
        arr[i]=var;
        max_heapify(arr,i,0);
    }

}
void display(int arr[],int n)
{   
    printf("\nAfter sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[100],n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elemenst in array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);

    }
    heap(arr,n);
    
    display(arr,n);
}