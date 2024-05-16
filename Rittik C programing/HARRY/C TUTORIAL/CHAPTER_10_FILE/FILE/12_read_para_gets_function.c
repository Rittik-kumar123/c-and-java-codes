#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char str[20];
    ptr=fopen("abcd.txt","r");    

    if(ptr==NULL)
    {printf("error!");
    exit(1);}

    while(!feof(ptr))  /* it will print the whole para. */
    {fgets(str,4,ptr); /* no of character scanned in one loop doesn't alter the program as the loop will
                          repeat itself till it reaches the end of the file. */
    printf("%s",str);}

    fclose(ptr);
    return 0;
}