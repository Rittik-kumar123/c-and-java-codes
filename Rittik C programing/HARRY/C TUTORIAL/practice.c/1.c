#include <stdio.h>

int main()
{
    int n,i,j,t,pos;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    
   printf("enter the number u want to insert");
   scanf("%d\n",&t);
   printf("enter the position");
   scanf("%d\n",&pos);
      for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
      for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}