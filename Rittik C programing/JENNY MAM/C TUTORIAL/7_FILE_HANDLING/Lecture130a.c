// program to find the number of lines in a text file.
// created a new file named rahul9.txt and saved some data.

#include<stdio.h>
#include<stdlib.h>  // we are inlcuding this header file to use exit(1).
int main()
{
    FILE *fp=NULL;
    char ch;
    int countlines=1;
    int countcharacters=0;
    fp=fopen("rahul9.txt","r");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    //for(ch=fgetc(fp);ch!=EOF;ch=fgetc(fp))
    {
        if(ch=='\n')
        {
            countlines++;
        }
        else
        countcharacters++;
    }
    fclose(fp);
    printf("\n The number of character in this file is %d\n",countcharacters);
    printf(" The number of lines in this file is %d\n",countlines);
    return 0;
}