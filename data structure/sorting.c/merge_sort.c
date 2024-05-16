#include <stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];//temporary array.
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[m+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        
        merge(arr,l,m,r);
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
    int n;
    scanf("%d",&n);
    int arr[]={12,11,13,5,6,7};
    printarr(arr,n);
    mergesort(arr,0,n);
    printarr(arr,n);

    return 0;
}
