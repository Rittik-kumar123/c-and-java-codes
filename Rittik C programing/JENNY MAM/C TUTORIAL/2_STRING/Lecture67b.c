#include<stdio.h>
#include<string.h>

int main()
{
    int len1,len2;
    char s1[20]="Rahul";
    char s2[10]="Kumar";
    len1=strlen(s1);
    len2=strlen(s2);
    for(int i=0;i<=len2;i++)    //we are going to copy the data of second strin into the first string.
    {
        s1[len1+i]=s2[i];
    }
    printf("%s",s1);
    return 0;
}