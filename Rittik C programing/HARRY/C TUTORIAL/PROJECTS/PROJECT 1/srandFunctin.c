#include<stdio.h>
#include<stdlib.h> // included for rand().
#include<time.h>   // included for srand().
int main()
{
    int n;
    printf("Enter the number of random numbers you want to create: ");
    scanf("%d",&n);
    srand(time(0));             /* --> This programme will create new sets of random numbers each time the 
                                       program will be executed.
                                   --> srand() is used to reinitilize the random function from time zero 
                                       to create new sets of random numbers each time.   */
    for(int i=0;i<n;i++)
    {printf("%d\n",rand());}
    return 0;
}