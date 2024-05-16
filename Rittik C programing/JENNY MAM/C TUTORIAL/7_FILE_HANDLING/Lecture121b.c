#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[30];
    int a=11;
    char ch='d';
    fp=fopen("abcd.txt","w");
    
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }

    printf("Enter the string:");
    gets(str);

    fprintf(fp,"%d %c %s",a,ch,str);
    
    return 0;
}