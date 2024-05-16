#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch = 'a';
    fp = fopen("abc.txt","w"); //fopen() will return the pointer to the file. which we are storing in fp pointer.

    if(fp==NULL)
    {printf("error! --> file does not exist.");
     exit(1);}

     fputc(ch,fp);
     fclose(fp);
    return 0;
}