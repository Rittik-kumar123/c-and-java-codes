#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[23];                      /* when ever we will try to print new string or character in the
                                          file using the program again then the previous saved string will
                                          be replaced by the new one or will be overwritten. */
    fp = fopen("abc.txt","w");
    
    if(fp==NULL)
    {printf("error!");
    exit(1);}

    printf("Enter the string : ");
    gets(str);
    
    for(int i=0; i!=strlen(str);i++)  /* --> to use putc() to print the string into the file we have to 
                                             use loop as puts() is used to printf character by character
                                             into the file. */ 
    {fputc(str[i],fp);}

    //fputs(str,fp);   --> we can use this function to print the string into the file without using loop.
    fclose(fp);
    return 0;
}