#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* use of realloc() --> we use to increse or decrease the size of the pointer we have already created
                            with the use to malloc() or calloc(). So first of all we have to allot some 
                            to the pointer which we will alter or change with the help of realloc(). */
    //use of calloc()

    int *ptr;
    int n;
    
    printf("Enter the size of the array you want to create: ");
    scanf("%d",&n);

    ptr=(int *)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {printf("Enter the value you want to allot to the %d element of the array: ",i+1);
    scanf("%d",&ptr[i]);}

    for(int i=0;i<n;i++)
    {printf("The value you alloted to %d element of the array id: %d\n",i+1,ptr[i]);}

    //use of realloc()
    printf("Enter the new size of the array you want to create: ");
    scanf("%d",&n);

    ptr=(int *)realloc(ptr, n*sizeof(int));

    for(int i=0;i<n;i++)
    {printf("Enter the new value you want to allot to the %d element of the array: ",i+1);
    scanf("%d",&ptr[i]);}

    for(int i=0;i<n;i++)
    {printf("The value you alloted to %d element of the array is: %d\n",i+1,ptr[i]);}

    free(ptr);

    return 0;
}