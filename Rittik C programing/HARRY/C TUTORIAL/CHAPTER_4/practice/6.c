   // finding factorial of a number using loop

#include<stdio.h>

int main()
{
    int n,fact=1,i=1;
    printf("Enter n value:");
    scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     fact=fact*i; //we can also write it as fact*=i;//
    // }
    while(i<=n) //here we used while loop in place of for loop for finding the factorial//
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is = %d",n,fact);


    return 0;
}