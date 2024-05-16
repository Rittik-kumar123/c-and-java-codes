#include<stdio.h>
void slice(char *s, int m , int n)
{
    int i=0;
    while((i+m)<=n)
    {
        s[i]=s[i+m];
        i++;
    }
    s[i]='\0';
}
int main()
{
    char s[] = "Rahulkumar";
    slice(s,1,6);
    printf("%s",s);
    return 0;
}