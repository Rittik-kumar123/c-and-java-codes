#include<stdio.h>

int main()
{
    printf("The size of both the array should be same.\n");
    int n;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int a1[n],a2[n],a3[n],a4[n];

    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("Enter the elements of 2nd array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a1[i]>=a2[i])
        {
            a3[i]=a1[i];
        }
        else
        a3[i]=a2[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a3[i]);
    }

    // for(int i=0;i<n;i++)
    // {
    //     int g=a3[0],pos;
    //     for(int j=0;j<n-i;j++)
    //     {
    //         if(g>=a3[j])
    //         {
    //             g=a3[j];
    //             pos=j;
    //         }
    //     }a4[j]=g;
    //     for(int k=pos;k<n-j-1;k++)
    //     {
    //         a3[i]=a3[i+1];
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\t",a4[i]);
    // }
    return 0;
}