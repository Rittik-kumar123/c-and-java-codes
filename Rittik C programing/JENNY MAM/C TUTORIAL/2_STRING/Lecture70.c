#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30];
    printf("Enter data of string S1:\n");
    gets(s1);

    //strlwr(s1); this is a predefined function in string.h header file.

    for(int i=0;s1[i]!='\0';i++)    
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }printf("%s",s1);
    return 0;
}