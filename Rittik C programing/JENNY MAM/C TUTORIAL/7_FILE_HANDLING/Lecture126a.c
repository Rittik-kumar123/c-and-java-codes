/* a+ mode in file handling --> a+ mode is used for reading and appending purpose in file handling.
--> we have created a new file named rahul5.txt and saved some data. */

#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("rahul5.txt","a+"); // --> if file doesn't exist it will create a new file and open the file. 
    if(fp==NULL)
    {
        printf("file doesn't exist!");
        exit(1);
    }
    fputs("Looser",fp); // -->after appending the cousor will be at end so to read the content we have to
                        //    use rewind() to take the cursor back to starting position.
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

    return 0;

}