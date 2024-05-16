//programme to find the sum of first n natural number using do while loop//
#include<stdio.h>
int main()
{
    int num,sum=0,i=1;
    printf("Enter n value:");
    scanf("%d",&num);
    do
    {
        sum+=i;
         i++;
       
    }while(i<=num);
    printf("The value of sum of first %d natural numbers is %d \n",num,sum);
    
    return 0;

} 