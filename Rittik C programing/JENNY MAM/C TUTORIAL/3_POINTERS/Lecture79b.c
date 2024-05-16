#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Welcome to jenny's lectures";
    char *p = str;
    printf("%c\n",*p); //W
    printf("%c\n",*(p++ +1)); //e
    printf("%c\n",*((p-- +5)-1)+3); //m+32=p
    printf("%c\n",*(++p +10)-32); // j-32=J
    printf("%c %c %c",*p,*++p,*--p); // e e w
    return 0;
}