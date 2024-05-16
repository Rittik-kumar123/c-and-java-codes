#include<stdio.h>

int main()
{
    char s[50]; /* s[50] here 50 means that we have alloted 50 bytes to the string s 
                   means we can't store more than 50 characters in the string s that we 
                   have created. --> size of a char variable is 1 byte. */
    printf("Enter your name : ");
    gets(s);    /* we don't need to decalre the format specifier while using gets() */
    printf("Your name is %s",s);
    return 0;
}