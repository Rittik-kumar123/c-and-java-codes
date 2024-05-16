#include<stdio.h>
#include<string.h>

int strlength(char s[]) //function prototype.  /* here *s is just a representation of string variable.*/
{                   //function defination.    we can also use s[] in place of *s both will result same.
    char *ptr = s;
    int len = 0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char s1[]="Rahul";
    int a = strlength(s1); //function call
    printf("The length of this string is %d",a);
    return 0;
}