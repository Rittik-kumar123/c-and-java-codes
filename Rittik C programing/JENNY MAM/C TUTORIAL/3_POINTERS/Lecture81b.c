#include<stdio.h>

int main()
{
    int a=3;
    int *ptr1=NULL;            // *ptr1=0;
    int *ptr2=NULL;            //*ptr2=0;
    if(ptr1==ptr2)
    {
        printf("Both are null pointers");
    }
    return 0;
}