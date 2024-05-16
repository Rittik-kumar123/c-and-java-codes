 #include<stdio.h>
 
 int main()
 {
     int a[5],i;
     for(i=0;i<5;i++)
     {
       printf("Enter the %dth element you want to allot in the array: ",i+1);
       scanf("%d",&a[i]);
     }
     for(int i=0;i<5;i++)
     {
       printf("The element at %dth position in the array is: %d\n",i+1,a[i]);
     }
     for(int i=4;i>=0;i--)
     {
       printf("The element in reverse order is %d\n",a[i]);
     }
     return 0;
 }