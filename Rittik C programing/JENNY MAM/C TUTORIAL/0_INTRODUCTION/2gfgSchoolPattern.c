#include<stdio.h>



void printPat(int n)
{
int a,b;
    scanf("%d",&a);
    
    for(int k=a;k>0;k--)
    {
        b=k;
        for(int i=a;i>0;i--)
        {
            for(int j=1;j<=b;j++)
             {
                 printf("%d",i);
             }
        }printf("$");
    }   //Y-our code here
}


int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printPat(a);
    // for(int k=a;k>0;k--)
    // {
    //     b=k;
    //     for(int i=a;i>0;i--)
    //     {
    //         for(int j=1;j<=b;j++)
    //          {
    //              printf("%d",i);
    //          }
    //     }printf("\n");
    // }   
    return 0;
}
