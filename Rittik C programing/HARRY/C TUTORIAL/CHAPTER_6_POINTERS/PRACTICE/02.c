  /* write a programme to find the address of a variable. Use this address
   to get the value of this varible. */
#include<stdio.h>
void printAdd(int a)
{
    printf("The address of variable a is %u\n", &a);
}
int main()
{
    int i = 4;
    printf("The value of variable i is %d\n", i);
    printAdd(i);
    printf("The address of the variable i is %u\n",&i);
    return 0;
}   /* From here we can conclude that in any function only the copy of the original variable assigned value
       is executed. */