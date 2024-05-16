    /* WAP to read two array of size 5 and store sum of those arrays into third array. */

#include<stdio.h>

int main()
{
    int array1[5],array2[5],SumArray[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the elements of 1st array: ");
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Enter the elements of 2nd array: ");
        scanf("%d",&array2[i]);
    }
    for(int i=0;i<5;i++)
    {
        SumArray[i]=array1[i]+array2[i];
        printf("The sum of respective elements you enteres is : %d\n",SumArray[i]);
    }
    

    return 0;
}