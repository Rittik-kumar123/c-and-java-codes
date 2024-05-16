#include<stdio.h>
char* display();
int main()
{
    char *str;
    str=display();
    str[0]='z';
    printf("string is: %s\n",str);
    return 0;
}
char* display()
{
    static char str[]="jenny";  // here we will also get the output and we will can also modify the
                                // string. As static variable lifetime is throughout the program.
    return str;
}