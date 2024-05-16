  // Return string from a function. 

#include<stdio.h>

char* display();

void main()
{
    char *str;
    str=display();
    /*str[0]='z';   --> we cant modify the return of the display fun as here it is returnin read only
                        string.  */ 
    printf("string is: %s\n",str);
}
char* display()
{
    return "jenny";
}
