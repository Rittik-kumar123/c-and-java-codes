#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char ch;  /* we are using getc() to print the whole paragraph.
                 --> we know that getc() is used to print a single character at a time. */

    ptr = fopen("abcd.txt","r");    
    
    if(ptr==NULL)
    {printf("error!");
    exit(1);}

    while(!feof(ptr))  /* it will print the whole paragraph that we have stored in the file. */
    {ch=getc(ptr);
    printf("%c",ch);}
    
    fclose(ptr);

    return 0;
}