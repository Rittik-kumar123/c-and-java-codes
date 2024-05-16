// NULL POINTER

#include<stdio.h>

int main()
{
    int a=3;
    //int *ptr1=&a;                 --> here we have initilised the pointer with a valid memory address.
    //printf("%d\n",*ptr1);         --> output will be 3.

    int *ptr1=NULL;
    //int *ptr2;                 // here we are not dereferencing the pointer we are printing the memory add.   
    //printf("%d\n",ptr2);       // op(output) will be any garbage value.
    //printf("%d\n",ptr1);       // output will be 0 (zero).
    //printf("%d\n",*ptr1);        // this will not run or sometime also collapse the program as we can't 
                                 // dereferernce a null pointer. so it is better to first check whether
                                 // the pointer is a null pointer or not.
    if(ptr1==NULL)                             
    {
        printf("This is a null pointer.");
    }
    else
    {
        printf("%d\n",*ptr1);    
    } 
    return 0;
}