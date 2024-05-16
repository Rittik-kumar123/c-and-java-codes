#include<stdio.h>

int main()
{
    int a[50],size,i,pos;
    printf("enter the size of array :");
    scanf("%d",&size);
    if (size>50)
    {
        printf("plzz give the size under 50");
    }
    else
    {
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("the array is:\n");
        for ( i = 0; i < size; i++)
        {
            
            printf("%d\t",a[i]);
        }
        printf("\nenter the pos for deletetion\n");
        scanf("%d",&pos);

        for ( i = pos-1; i < size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;
        printf("\nthe new array is:\n");
        for ( i = 0; i <= size-1; i++)
        {
            printf("%d\t",a[i]);
            
        }
        
        
        
    }
    
}