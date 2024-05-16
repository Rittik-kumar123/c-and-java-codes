// r+ MODE IN FILE HANDLING, created a file named rahul3.txt for understanding the work of r+ mode.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    char ch='x';
    char str[10];
    fp=fopen("rahul3.txt","r+");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    printf("Enter a string:");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
    return 0;
}