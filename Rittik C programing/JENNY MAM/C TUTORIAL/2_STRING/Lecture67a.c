#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20]="Rahul";
    char s2[10]="kumar";
    strcat(s1,s2);
    printf("%s\n",s1);
    strcat(s2,s1);
    printf("%s",s2);
    return 0;
}