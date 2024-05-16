#include<stdio.h>

int main()
{
    //char name[30]="Rahul";
    //printf("%s",name);          it will print Rahul
    char name[30];
    printf("Enter your name:");
    //scanf("%s",name);
    //printf("%s",name);          using scanf we can print string withour blank space only.
    gets(name);
    printf("%s",name);            /* BUFFER OVERFLOW:
                                     --> This is the drawback of both scanf and gers function.
                                     --> Here we have alloted space for only 30 elements to store in the
                                         string but it can read more than 30 elements, although it hasn't
                                         its own alloted space for this purpose. It overwrites the memory
                                         of other files present in the disk drive to read the input from 
                                         the user. To use this idea for the programmer may be very harmful
                                         as it may overwrite some of our useful files or pragrammes, and
                                         our existing file will be deleated permamentally from our disk.
                                         So we should avoid these type of practice. */
                                         
    return 0;
}