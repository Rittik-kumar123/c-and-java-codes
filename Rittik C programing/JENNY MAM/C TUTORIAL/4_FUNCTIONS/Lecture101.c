//  FUNCTION POINTER.

#include<stdio.h>
int sum(int ,int); // prototype declaration of the function
int main()
{
    int s=0;
    int (*ptr)(int ,int)=sum; /* declaration of the pointer and equating it with the function name. 
                             --> the declaration of the pointer depends on the prototype of the function.*/

    //s=(*ptr)(2,3);  // calling the function using the pointer to the function. and storing the output in 
                    // a int variable named s.

    s=ptr(2,3);                 
    printf("%d",s);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}