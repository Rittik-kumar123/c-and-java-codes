#include<stdio.h>

int main()
{
    char name[30];
    printf("Enter your name: ");
    gets(name);
    printf("%s",name);
    puts(name);  // puts function sends the command to the next line after the end of a string.
    puts(name);
    return 0;
}