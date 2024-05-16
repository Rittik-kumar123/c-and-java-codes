#include<stdio.h>

int main()
{
    int n ;
    printf("enter the number that u want check"),
    scanf("%d\n",&n);
    if (n%2==0)
    {
        printf("The number that u have entered is even one");
    }
    else
    {
        printf("The number that u have entered is odd one");
    }
    return 0;
}