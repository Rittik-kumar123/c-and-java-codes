/* fseek() in file handling. 
   --> created a new file rahul6.txt and saved some data. */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("rahul6.txt","r");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);

    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",fp);

    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);

    return 0;
} 