#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of random numbers you want to generate: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {printf("%d\n",rand());}   /* as we have used only rand(), there will be the same output each time we 
                                  run the programme. It will not give new set of random numbers.  */
    return 0;
}