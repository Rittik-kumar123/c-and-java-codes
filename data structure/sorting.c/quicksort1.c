# include<stdio.h>
int quicksort(int a[],int l,int r)
{
   int i=l,j=r,pi=l;
   while(i<j)
   {
       while(a[i]<=a[pi] && i<=r)
       {
           i++;
       }
       while(a[j]>=a[pi] && j>=l)
       {
           j--;
       }
       if(i<j)
       {
           int t= a[i];
           a[i]=a[j];
           a[j]=t;
       }
   }
   int t=a[j];
   a[j]=a[pi];
   a[pi]=t;
   return i;
}
void quick(int a[],int l,int r)
{
    if(l<r)
    {
        int pi=quicksort(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    printf("Enter element in array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a,n);
    quick(a,0,n-1);
    print(a,n);
}