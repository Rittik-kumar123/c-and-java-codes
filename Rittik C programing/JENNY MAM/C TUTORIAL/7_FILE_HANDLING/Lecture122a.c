// HERE WE ARE TO LEARN HOW TO USE READING MODE IN FILE HANDLING.
// FIRST WE HAVE TO CREATE A FILE TO USE READING MODE. SO WE HAVE CREATED A FILE NAME rahul1.txt and inputed
// some data.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("rahul1.txt","r");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    fclose(fp);
    return 0;
}