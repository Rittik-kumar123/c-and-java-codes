#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("abc.txt","r+");

    if(ptr==NULL)    
    {printf("error!");
    exit(1);}

    fputc('z',ptr); // --> this will replace the first existing letter of the abc.txt file with 'z' char.  
    fputs("Black",ptr); //--> this will replace 5 char to Black.
    fclose(ptr);
    return 0;
}