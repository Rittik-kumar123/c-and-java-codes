#include <stdio.h>

int main()
{
    int n,fact=1,i=1;
    printf("Enter the number whose factorial u want");
    scanf("%d",&n);

    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("the value of factorial is  %d",fact);
    return 0;
}