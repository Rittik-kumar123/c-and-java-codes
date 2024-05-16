#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp=NULL;
    char str[40];

    fp=fopen("abc.txt","a");    

    if(fp==NULL)
    {printf("error!");
    exit(1);}
    
    printf("Enter the content you want to append: ");
    gets(str);

    //fputs(str,fp); 

    fprintf(fp," %s",str);
    printf("Sussefully appended the file.");

    fclose(fp);

    return 0;
}