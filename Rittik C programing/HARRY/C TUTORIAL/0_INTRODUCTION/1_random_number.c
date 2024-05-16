#include<stdio.h>
#include<stdlib.h>
#include<time.h>// included to use time() in srand().
int main()
{
    int x,n,range;
    printf("Enter the number of random nubmers you want to generate: ");
    scanf("%d",&n);
    printf("Enter the range from 1 to where you want to generate the random numbers:");
    scanf("%d",&range);
    srand(time(0)); // this function is used before using the rand() to get new set of random numbers each time
                    // the program is executed.
                
    for(int i=0;i<n;i++)
    {
        x=rand() % range +1; // we have used modulo operator +1 to get random generated values range from 1 to 100.
        printf(" %d ",x); // same values will be printed each time program is executed if we don't use the srand().
        //printf("seed= %d ",time(0)); 
        //seed: It is an integer value that contains a seed for a new sequence of pseudo-random numbers.
    }

    return 0;
}