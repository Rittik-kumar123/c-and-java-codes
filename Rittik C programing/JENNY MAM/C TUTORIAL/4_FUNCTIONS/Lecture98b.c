#include<stdio.h>
char* display();
int main()
{
    char *str;
    str=display();
    printf("string is: %s\n",str);
    return 0;
}
char* display()
{
    char* str[]="jenny";  // here it will not print anything as the memory used here is stack memory.
                          // it will show error. 
    return str;
}    