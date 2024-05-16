#include<stdio.h>
 int main ()
 {
     int n,i,a[n],sum=0;
     printf("Enterthe element that u want");
     scanf("%d",&n);
     for ( i = 0; i < n; i++)
     {
         scanf("%d",&a[i]);
     }
     for ( i = 0; i < n; i++)
     {
         sum = sum + a[i];
          
     }
     printf("the sum of all element in the array is: %d",sum);
    
     
     return 0;
     
     
 }