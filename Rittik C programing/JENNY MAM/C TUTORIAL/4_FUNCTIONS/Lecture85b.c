#include<stdio.h>
char fun()
{
    char c;
    printf("Enter a charactre:");
    scanf("%c",&c);
    return  c;
}
int main()
{
    char ch;
    ch=fun();
    printf("%c\n",ch);

    return 0;
}