#include<stdio.h>

int main()
{
    int row,column;
    printf("Enter the no of rows you want to print: ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }printf("\n");
    }
    for(int i=2;i<=row;i++)
    {
        for(int j=i;j<=row;j++)
        {
            printf("* ");
        }printf("\n");
    }
    return 0;
}