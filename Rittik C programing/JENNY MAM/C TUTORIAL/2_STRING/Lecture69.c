#include<stdio.h>
#include<string.h>

int main()
{
    int stringlength;
    char s1[30];
    char ch;

    printf("Enter string 1 data:\n");
    gets(s1);
    
    stringlength = strlen(s1);
    
    for(int i=0;i<stringlength/2;i++)
    {
        ch=s1[i];   /* first we are coping the element of s1 into a temporary char variable. so that after
                       equating the initial elements of s1 with the later element of s2, we will later 
                       equate the later elements with the data stored in the char variable. */ 
        s1[i]=s1[stringlength-1-i];
        s1[stringlength-1-i]=ch;
    }
    printf("%s",s1);


    return 0;
}