#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* use of calloc() --> it initialises each element with zero.
                       --> its protototype is different from that of the malloc(). */
    int *ptr;
    int n;
    
    printf("Enter the size of the array you want to create: ");
    scanf("%d",&n);

    ptr=(int *)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    {printf("Enter the value of %d element you want to create: \n",i+1);
    scanf("%d",&ptr[i]);}

    for(int i=0;i<n;i++)
    {printf("The value of the element at %d position of the array is: %d\n",i+1,ptr[i]);}

    return 0;
}