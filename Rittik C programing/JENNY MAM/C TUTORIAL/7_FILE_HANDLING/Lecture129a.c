// --> rewind() in file handling. --> created a new file rahul8.txt and saved some data.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("rahul8.txt","r+");
    if(fp==NULL)    
    {
        printf("error!");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    printf("\n");
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    return 0;
}