#include<stdio.h>

int main()
{
    int i=4;
    int *j;  /* Here *j interpreates that it will point to address which is stored in the j variable */
    j=&i; /* Here j stores the address of varible i */
    printf("Address Of i = %u\n ",&i); /* Here in the case of address we have used %u format specifier
                                          because address can't be a -ve value. But although if we use
                                          %d, it will not show any error but it may show the wrong 
                                          memory address as unsigned circle concept will be used and
                                          it may show +ve as well as -ve address of a memory address.*/
    printf("Address of j = %u\n ",&j);
    printf("Address of i = %u\n ",j);
    printf("value of i = %d\n ",i);
    printf("Value of i = %d\n ",*j);
    printf("value of i = %d\n ",*(&i));
    return 0;
}