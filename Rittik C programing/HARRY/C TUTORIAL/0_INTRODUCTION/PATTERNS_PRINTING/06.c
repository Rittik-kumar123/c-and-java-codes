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
            printf("%c ",64+i); // ascii value of A is 65.
        }printf("\n");
    }
    return 0;
}