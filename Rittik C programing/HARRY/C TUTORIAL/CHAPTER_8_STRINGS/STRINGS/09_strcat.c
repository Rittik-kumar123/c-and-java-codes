#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]="Hello ";
    char s2[]="Rahul";
    strcat(s1,s2);   /* strcat() is used to copy the data of one string to other string
                        --> here we are copying the data of s2 to s1 without altering the data of 
                            s1. */
    printf("%s",s1);
    return 0;
}