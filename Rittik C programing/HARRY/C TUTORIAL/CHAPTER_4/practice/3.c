//programme to find the sum of first n natural number//
#include<stdio.h>
int main()
{
    int num,sum=0,i=1;
    printf("Enter n value:");
    scanf("%d",&num);
    // for(i=1;i<=num;i++)
    // {
    //      sum +=i; //we can also write it as sum=sum+i;//
    // }
    while(i<=num) //same programme but here using while loop//
    {
        sum +=i;  // sum=sum+i;
        i++;
    }
    printf("The value of the sum of the first %d natural numbers is %d",num,sum);
    return 0;

} 