#include<stdio.h>

int main()
{
    int a[50],size,i,num,pos;
    printf("enter the number of element that u want to store in a array\n");
    scanf("%d",&size); 
    // this condition is known as buffer overflow.
       if (size>50)
    {
        printf("the size u have have entered is surpss the size of array\n");
    }
     else
    for ( i = 0; i < size; i++)
    {
       scanf("%d",&a[i]); 
    }
 
    printf("the element in thhe array is:\n ");
    
    for ( i = 0; i < size; i++)
    {
       
        printf(" \n%d\t",a[i]);
    }

    printf("enter the pos and size that u want to insert in a array\n");
    scanf("%d %d",&pos,&num);
    
    for ( i = size-1; i < pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;

     for ( i = 0; i < size; i++)
     {
         printf("the  array is :\n");
         printf(" %d\t ",a[i]);
     }
     
    


     
    
    
    
}