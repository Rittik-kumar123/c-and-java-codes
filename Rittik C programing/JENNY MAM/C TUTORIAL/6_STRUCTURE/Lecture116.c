// STRUCTURE PADDING IN C.

#include<stdio.h>
struct abc
{
    char c;
    int a;
    char b;
    double d;
};
int main()
{
    struct abc s;
    printf("%d\n",sizeof(s));
    return 0;
}