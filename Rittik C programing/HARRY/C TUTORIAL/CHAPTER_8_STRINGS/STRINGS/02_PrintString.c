#include<stdio.h>

int main()
{
    char str[]="Rahul Kumar";
    char *ptr=str;    /* *ptr points the base memory address of str string. 
                        every pointer points to the base memory address of any variable
                        to which it is pointing. */     
                  
    while(*ptr!='\0')  /* in this programme we have used %c to print the string elements. So
                        we had to use a itterator to print the whole string as using %c can
                        we can print only one element at a time.
                        To avoid the use of the itterator we can use %s that is specially
                        defined for string. */
    {
        printf("%c",*ptr);
        ptr++;          /* ptr++ stores the memory address next to the base memory add
                           of the block. */
    }
    return 0;
}