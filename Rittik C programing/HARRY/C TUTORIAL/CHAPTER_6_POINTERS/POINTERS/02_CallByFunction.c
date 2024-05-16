       //CALL BY VALUES --> SENDING THE VALUES OF ARGUMENTS TO THE FUNCTIONS.
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of a+b is %d\n", sum(a, b));
    printf("The value of a and b after function call is %d and %d\n", a, b);

    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 22; /*Here we have alloted new vlaues to a and b, but this will not be able to make any
              any changes in the values of a and b defined in the main fumction because we can't
              change the variables of main by using another function.
             --> also in another function only the copy of the variables that are defined in the main
                 get used so if we make any changes in those copy elements, that will not reflected in 
                 the main.
             --> But we can do so by using the concept of pointers, let's see now.*/
    a = 44;
    return c;
}