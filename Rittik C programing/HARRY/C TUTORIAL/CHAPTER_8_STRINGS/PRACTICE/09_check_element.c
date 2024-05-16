#include<stdio.h>
int presence(char s[], char c)
{
    char *ptr = s;
    int count = 0;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char s[] = "rahulvivekburnwalkumar";
    char check;
    printf("Enter a character to check it's presence: ");
    scanf("%c",&check);
    int count = presence(s,check);  /* here 'check' under cotation mark is not used because check is a 
                                       variable that stores a desired character, it is not a character it self.*/
    if(count>=1)
    { 
       printf("Present");  
    }
    else
    {
        printf("Not Present");
    }
    
    return 0;
}