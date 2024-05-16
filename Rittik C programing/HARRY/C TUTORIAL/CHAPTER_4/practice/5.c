//program to calculate the sum of the numbers occuring in the multiplication table of any number// 
#include<stdio.h>
int main()
{
    int num,i,table,sum=0;
    printf("Enter n value:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        table=i*num;
        sum= sum+table;
    }printf("the sum of the numbers occuring in the table of %d is = %d",num,sum);
    return 0;
}