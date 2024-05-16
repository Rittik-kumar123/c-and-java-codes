#include<stdio.h>

char* display();

int main()
{
    char *str;
    str=display();
    //str[0]='z';
    printf("string is: %s\n",str);
    return 0;
}
char* display()
{
    char* str="jenny";  /* here memory is allocated in heap area of the memory so it will not be 
                           cleared as the control get out from the display(), from here we only 
                           get read only memory, so we can't modify it further. */
    return str;
}