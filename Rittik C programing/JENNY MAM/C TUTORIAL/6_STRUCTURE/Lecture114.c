//  UNIONS

#include<stdio.h>

union abc
{
    int a; char b; float c;
};
int main()
{
    union abc u;
    union abc *ptr=&u;
    u.a=1;
    u.b=97;
    u.c=78.97;
    printf("a value is %d\n",ptr->a);
    printf("b value is %s\n",ptr->b);
    printf("c value is %f\n",ptr->c);  // only this will be printed as othe values will be 
                                       //   deleted as we assign new values.
    return 0;
}