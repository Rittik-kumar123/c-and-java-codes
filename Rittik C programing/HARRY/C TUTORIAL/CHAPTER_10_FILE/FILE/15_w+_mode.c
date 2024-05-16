#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char str[30];
    char ch;

    ptr = fopen("abc.txt","w+");

    if(ptr==NULL)    
    {printf("error!");
    exit(1);}

    fputs("Kumar",ptr); //--> this will erase all the previous saved content in the file and then save Kumar.

    rewind(ptr);

    //printing the updated file on the console
    while(!feof(ptr))  /*--> this will return nothing on the console as after using the fputs() earlier 
                             in the program the file pointer is already at the end of the file so while 
                             loop will automatically terminate. To get rid of this problem we have to 
                             use a new function i.e., rewind() before the while() which is used to move
                             the file pointer to the starting point of the file. */    
    {ch=fgetc(ptr);
    printf("%c",ch);}

    fclose(ptr);
    return 0;
}