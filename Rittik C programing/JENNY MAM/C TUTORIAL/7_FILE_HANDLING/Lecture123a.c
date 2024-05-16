// APPEND MODE IN FILE HANDLING. LETS CREATE A NEW FILE, NAMING IT rahul2.txt
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("rahul2.txt","a");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    printf("Enter the content you want to append in the file:");
    gets(str);
    fprintf(fp,"%s",str);  //if you want to add the input in new line the write \n%s in place of %s.
    printf("Sussfully appended go and checkout the file.");
    fclose(fp);
    return 0;
}