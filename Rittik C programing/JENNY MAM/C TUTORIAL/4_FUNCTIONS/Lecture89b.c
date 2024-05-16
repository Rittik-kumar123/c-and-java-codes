// ASSIGNMENT QUESTION 
#include<stdio.h>

char sum(void);

void main()
{
    char s;
    s=sum();
    printf("sum=%c",s);  //here we are returning the character only.
}
char sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    return 'a','0','1';    // in place of 1 we can input only single digit number, we cant input multidigit
                           // number otherwise it will give error. as we are treating 1 as a character here
                           // not as an integer.
    return sum;   // this will not be executed.
}