// program to copy the content of one file into another file.
// --> created a new file named rahul11.txt and saved some data.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fsource=NULL,*fdestination=NULL;
    char c1,c2;
    fsource=fopen("rahul10.txt","r");
    if(fsource==NULL)
    {
        printf("error!");
        exit(1);
    }
    fdestination=fopen("rahul11.txt","w+");  // it will create rahul11.txt file.
    if(fdestination==NULL)
    {
        printf("error!");
        exit(1);
    }
    while((c1=fgetc(fsource))!=EOF)
    {
        fputc(c1,fdestination);
    }
    printf("sussessfully copied");
    printf("Now the data in the new file is:");
    while(!feof(fdestination))
    {
        c2=fgetc(fdestination);
        printf("%c",c2);
    }
    fclose(fsource);
    fclose(fdestination);
    return 0;
}