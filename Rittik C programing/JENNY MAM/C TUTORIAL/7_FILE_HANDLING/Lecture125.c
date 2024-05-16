// w+ mode in file handling. 
// create a new file rahul4.txt --> if file doesn't exist it will create a new file.

#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("rahul4.txt","w+");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    fputs("Kumar",fp); // --> it will print the data in the file. And after printing the data the cursor 
                       //     will be at last. So to read the data we have to move the cursor to the 
                       //     starting position. we will use rewind function.
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);

    return 0;
}