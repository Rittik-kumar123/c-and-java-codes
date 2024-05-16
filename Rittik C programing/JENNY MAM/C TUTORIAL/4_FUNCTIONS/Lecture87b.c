//CALL BY REFERENCE FUNCTION --> we use the concept of pointers while using the concept of call by reference.

#include<stdio.h>
void fun(int* ,int* ); // here it will also run when we leave the parameter declaration blank.
int main()
{
    int x=5,y=7;
    fun(&x,&y);  // we are passing address of the varibles to the function.
    printf("Inside the main function:\n");
    printf("The new value of x is %d and y is %d after using call by reference method.",x,y);
    return 0;
}
void fun(int* x, int* y) // here we have to use pointer varible as we have to store the memory add. of the 
                         // variable.
{
    *x=7;
    *y=5;
    printf("Inside the fun function:\n");
    printf("The value of x is %d and y is %d\n",*x,*y);
}