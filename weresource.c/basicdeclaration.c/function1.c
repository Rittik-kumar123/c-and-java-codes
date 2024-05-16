# include<stdio.h>

int sum (int a,int b)
{
    int sum=0;
    sum=a+b;
    return(sum);
}
int main()
{
    int a,b,S,sum();
    printf("enter the value of a and b :");
    scanf("%d %d",&a,&b);
    S = sum(a,b);
    printf("the sum  is %d",S);
    return 0;
}