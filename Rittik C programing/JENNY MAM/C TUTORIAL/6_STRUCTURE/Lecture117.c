// STURCTURE PACKING IN 

#include<stdio.h>
#pragma pack(1)  // pragma pack is used to turn off padding.
struct abc
{
    char b;
    int a;
    double c;
};
int main()
{
    struct abc s;
    printf("%d\n",sizeof(s));
    return 0;
}