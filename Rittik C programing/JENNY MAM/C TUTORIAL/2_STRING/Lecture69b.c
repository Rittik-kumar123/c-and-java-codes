#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l;
    char ch;
    char s1[20];

    printf("Enter string 1 data:\n");
    gets(s1);
    l=strlen(s1);
    
    for(i=0,j=(l-1);i<j;i++,j--)    
    {
        ch=s1[i];
        s1[i]=s1[j];
        s1[j]=ch;
    }
    printf("%s",s1);
    return 0;
}