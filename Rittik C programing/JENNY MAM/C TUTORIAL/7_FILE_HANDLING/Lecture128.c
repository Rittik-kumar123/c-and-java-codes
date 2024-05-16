// ftell() in file handling. prototype decalaration --> long int ftell(FILE *pointer).
// --> created a new file rahul7.txt ans saved some data.
// --> return index value where the cursor will be.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch, str[40];
    fp=fopen("rahul7.txt","r");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    printf("%d\n",ftell(fp)); // --> print 0

    //ch=fgetc(fp);   // --> print 1
    fscanf(fp,"%s",str);  // --> it will read Rahul from the file and after reading the file pointer will 
                          //     at space after Rahul.
    printf("%d",ftell(fp));  // --> print 5 ( index value )

    fseek(fp,0,SEEK_END);
    printf("\n%d",ftell(fp)); // --> it will return the full size of the file as we have moved the pointer
                              //     to the end of the file before using the ftell().
    return 0;
}