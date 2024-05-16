#include <stdio.h>
int stars(int n);
int main()
{
    int n;
    printf("Enter n value : ");
    scanf("%d",&n);
    stars(n); ///Function called
    return 0;
}
int stars(int n) //Function defination 
{
    int i;
    if (n==1)
    {
        printf("*\n");
        return;
    }
     stars(n-1);
     for(i=1;i<=(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");
}