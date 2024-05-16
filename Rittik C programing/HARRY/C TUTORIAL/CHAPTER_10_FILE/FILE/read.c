# include<stdio.h>
int main()
{
    FILE *fp = NULL;
    char str[25];
    char ch;
    fp = fopen("read.txt","w+");
    fputs("rittik",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    
    fclose(fp);
}