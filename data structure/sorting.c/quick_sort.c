#include <stdio.h>
#include<stdlib.h>
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int l,int r)
{
   int pivot=arr[r];
   int i=(l-1),j;
   for(j=l;j<r;j++)
   {
       if(arr[j]<pivot)
       {
           i++;
           swap(&arr[i],&arr[j]);
       }
   }
   swap(&arr[i+1],&arr[r]);
   return (i+1);
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
void printarr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={10,7,8,9,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarr(arr,n);
    quicksort(arr,0,n-1);
    printarr(arr,n);

    return 0;
}
