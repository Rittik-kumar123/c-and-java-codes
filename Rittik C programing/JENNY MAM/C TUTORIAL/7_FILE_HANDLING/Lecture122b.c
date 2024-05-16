#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("rahul1.txt","r");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    //fgets(str,7,fp);  // it will read only 6 charactres as last character is a null character.
                      // fgets function will as it found a new line operator. So to get all lines read we 
                      // to put this gets function in a loop.

    while(!feof(fp))
    {
        fgets(str,3,fp);
        printf("%s",str);
    }                      
    return 0;
}