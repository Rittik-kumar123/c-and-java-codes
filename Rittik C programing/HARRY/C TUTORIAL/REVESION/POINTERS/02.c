/* Write a program having a variable i. Print the address of i. Pass this variable to a function and print
 its address. Are these addresses same ? WHY ? */
#include<stdio.h>
void print_address(int i)
{
    printf("The address of i is %u",&i);
}
int main()
{
    int i=5;
    int *ptr=&i;
    printf("The address of i is %u\n",ptr);
    print_address(i);

    return 0;
}  /* From here we can conclude that in any function only the copy of the original variable assigned value
       is executed. */