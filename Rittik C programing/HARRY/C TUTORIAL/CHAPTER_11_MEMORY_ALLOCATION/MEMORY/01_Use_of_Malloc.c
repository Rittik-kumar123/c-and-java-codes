#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*use of malloc() --> malloc() return type is void so we have to typecast the output of the malloc() to our
                        desired type. 
                      --> this function is used to allocate the amount of memory according to our desire in the
                        heap section of the memory.
                      --> here ptr is an int variable and it have the amount of memory in bytes that we have 
                        alloted to it using the malloc() and typecasted the memory type to int providing a
                        int pointer brfore the malloc().
                      --> malloc() initialises the value of each element with a garbage value. */ 
    int *ptr;
    int n;

    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);

    ptr=(int *)malloc(n * sizeof(int)); /* here we have used the sizeof() to know the size of int alloted
                                           in the this system. 
                                           --> the size allocation may vary from system to system so it is
                                               better to ask abour the size allocation by the compiler it
                                               self. */

    for(int i=0;i<n;i++)
    {printf("Enter the value of %d element of the array\n",i+1);
    scanf("%d",&ptr[i]);}
    
    for(int i=0;i<n;i++)
    {printf("The value at %d positon of this array is %d\n",i+1,ptr[i]);}

    return 0;
}