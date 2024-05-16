#include<stdio.h>
#include<string.h>
void main()
{
char ch;
int l,i;
char s1[30],c; 
printf("enter the string : ");
gets(s1);
l=strlen(s1);
for(i=0;i<l/2;i++)
{
    ch=s1[i];
    s1[i]=s1[l-1-i];
    s1[l-1-i]=ch;
}
printf("%s",s1);
}
