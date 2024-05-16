// PROGRAM TO FIND THE SUM OF FIRST N NATURAL NUMBER. --> WITH THE HELP OF RECURSION.

#include<stdio.h>
int sum(int x)
{
    int s=0;
    if(x==1)
    return x;  // When x==1; we return to the function to which we reach to this statement i.e., the parent fun()
    s=x+sum(x-1);
    return s;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}