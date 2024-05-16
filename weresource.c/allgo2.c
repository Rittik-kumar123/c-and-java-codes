#include<stdio.h>
int main()
{
    int n,ad;
    printf("enter the number");
    scanf("%d",&n);
    if (n>51)
    {
        ad =3*(n-51);
        printf("the value of ad is %d",ad);
    }
    else
    {
        printf("0");
    }
    
}