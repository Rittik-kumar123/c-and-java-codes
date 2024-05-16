#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp=NULL;
    
    char str[30];
    fp=fopen("abc.txt","w");

    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }

    printf("Enter the string:");
    gets(str);

    // for(int i=0;i!=strlen(str);i++) 
    // fputc(str[i],fp);

    fputs(str,fp);
    fclose(fp);
    return 0;
}