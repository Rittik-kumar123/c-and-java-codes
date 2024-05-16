#include<stdio.h>

int main()
{
    int i=6;
    int *ptr=&i;
    int **ptr_ptr=&ptr;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*ptr);
    printf("The address of i is %u\n",ptr);
    printf("The address of i is %u\n",&i);
    printf("The value of i is %d\n",**ptr_ptr);
    return 0;
}