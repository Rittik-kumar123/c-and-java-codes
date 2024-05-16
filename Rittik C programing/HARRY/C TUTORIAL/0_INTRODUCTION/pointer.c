#include<stdio.h>
#include<conio.h>
main()
{
    int i=100;
    int* ptr;
    ptr=&i;
    printf("%d\n",i);
    printf("%u\n",ptr);
    printf("%u\n",&i);
    printf("%u\n",&ptr);
    printf("%u\n",*ptr);
    printf("%u\n",*(&i));

}