//WAP a program to read an array of 10 integers and count total number of odd and even elements

#include<stdio.h>

int main()
{
    int integers[10];
    int even=0,odd=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the %dth element of the array: ",i+1);
        scanf("%d",&integers[i]);  /* here we are taking the data and at the same time we are 
                                      checking the entries whether they are even or odd ones. */

        if(integers[i]%2==0)
        even+=1;
        else
        odd+=1;
    }    
    printf("The number of even numbers is: %d and the number of odd numbers is: %d ",even,odd);
    return 0;
}