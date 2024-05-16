#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of elements you want to input:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for ( int i = 0; i < n  ; i++)
    {
        int count=1;
        if(a[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j] )
                {
                    count++;
                    a[j]=-1;
                }    
           }
        }
       if(a[i]!=-1)
       printf("%d -> %d\n",a[i],count);
    }
    return 0;
}