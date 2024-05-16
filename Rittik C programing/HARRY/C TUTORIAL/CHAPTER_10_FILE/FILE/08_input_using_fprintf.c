#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char ch = 'A';
    char str[30] = "Rahul Kumar";
    int i = 10;

    fp = fopen("abc.txt","w");
    
    if(fp==NULL)
    {printf("error!");
    exit(1);}

    printf("Ente the string: ");
    gets(str);

    fprintf(fp,"%d %s %c",i,str,ch);
    fclose(fp);
    return 0;
}