#include<stdio.h>
void modify(char[],char[]); // we can also use char*,char* in place of char[],char[]
int main()
{
    char str1[]="Rahul";
    char str2[]="Kumar";
    modify(str1,str2);
    return 0;
}
void modify(char str1[], char str2[])
{
    int i,l=0;
    for(i=0;str1[i];i++)
    {
        l=l+1;

    }
    str2[1]='z';
    printf("length of the string is %d\n",l);
    printf("both the strings are: %s %s\n",str1,str2);
}