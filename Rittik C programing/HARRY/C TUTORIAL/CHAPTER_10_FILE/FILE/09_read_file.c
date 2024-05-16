#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char ch;
    
    fp = fopen("abcd.txt","r");
    
    if(fp==NULL)      /*--> if the file doesn't exist in the folder then program will terminate and the 
                            output of the program will be "error" i.e., what we have written in the 
                            printf() of the if condition. */
    {printf("error!");
    exit(1);}
    
    ch = fgetc(fp);
    printf("%c",ch);  //--> output will be the first letter stored in the file named abcd.txt

    fclose(fp);

    return 0;
}