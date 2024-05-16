#include <stdio.h>
 
int main()
{
    int i,n,a[n],c[n];
    printf("Enter the element of array :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        a[i]=c[i];
        printf("%d be copied under %d ",a[i],c[i]);
    }
    

    
}