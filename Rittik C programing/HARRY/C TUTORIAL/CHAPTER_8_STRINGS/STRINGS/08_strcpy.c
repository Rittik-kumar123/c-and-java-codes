#include<stdio.h>
#include<string.h> // strcpy() is defined in string.h header file.
int main()
{
    char s[]="Rahul";
    char s2[40];
    strcpy(s2, s); /* strcpy() is used to copy the content of one string into another atring 
                      --> inside the function bracket new string variable name is written first
                          then the earlier defined string variable whose data is to be copied.*/
    printf("My name is %s",s2);

    return 0;
}