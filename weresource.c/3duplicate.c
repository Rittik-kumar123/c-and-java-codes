#include<stdio.h>
int main()
{
    int i,j,n,a[n],count;
    printf("enter the element that You want to enter in the array :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Element that u have enter in the array is %d\t",a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < i+1; j++)
        {
            int count=1;
            if (a[i]==a[j])
            {
                count++;
            }
            
        }
        printf("the duplicate element in the array is %d %d",a[i],count);
        
    }
    
    

    
    
}