#include<stdio.h>

int main()
{
    //char ptr[]="Rahul Kumar";
    char *ptr = "Rahul Kumar";  /* Here we can't change the data stored in a string using 
                                   ptr[] variable but we can change the data while using
                                   *ptr.*/
    ptr="Vivek";
    printf("%s",ptr);
    return 0;
}