#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=10;i>=1;i--)
    {
        printf(" %d X %d = %d\n",num,i,i*num);
    }
    return 0;

}