  /* write a programme to find the address of a variable. Use this address
   to get the value of this varible. */
#include<stdio.h>

int main()
{
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The address of variable a is %u\n",&a);
    printf("The address of variable a is %u\n", ptr);
    printf("The value of variable a is %u\n", *ptr);
    printf("The value of variable a is %u\n", a);
    return 0;
}