#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30];
    printf("Enter the string you want to convert into upper case:\n");
    gets(s1);

    for(int i=0;s1[i]!='\0';i++)       
    {
        //if(s1[i]<='z' && s1[i]>='a')
        {
            s1[i]=s1[i]-32;
        }
    }printf("%s",s1);
    return 0;
}