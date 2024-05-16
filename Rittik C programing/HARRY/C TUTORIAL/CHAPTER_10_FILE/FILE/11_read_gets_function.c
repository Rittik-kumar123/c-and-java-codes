#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char str[40];

    ptr=fopen("abcd.txt","r");    

    if(ptr==NULL)
    {printf("error!");
    exit(1);}
    
    /*fgets(str,10,ptr);   -->  it will return first 9 characters stored in the file as last character
                                will be '\0' i.e., a null character.
    printf("%s",str);*/
    
    fgets(str,38,ptr);   /* here whatever in the first 37 char place will be there in the file 
                            will be printed.
                            --> gets() is a line operator means it termintes after the line in which it
                                is operating completes. It will not jump to the next line. */
    printf("%s",str);
    return 0;
}