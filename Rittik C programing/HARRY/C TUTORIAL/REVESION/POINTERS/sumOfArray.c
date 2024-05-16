#include<stdio.h>
int sumArray(int a[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }return sum;
}

int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    { 
        printf("Enter the array element at %dth position : ",i+1);
        scanf("%d",&a[i]);
    }
    int c = sumArray(a);
    printf("The sum of the elements of the array you entered is %d\n",c);
    return 0;
}