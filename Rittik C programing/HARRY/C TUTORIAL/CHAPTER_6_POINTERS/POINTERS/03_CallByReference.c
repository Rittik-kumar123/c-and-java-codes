   /* CALL BY REFERENCE --> In this method the address of the variable is 
                            passed to the function as arguments.*/
#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);  /* Here *a and *b are pointing to the values/numbers
                            stored in the address of variable a and b. */
int main()
{
    int x = 3, y = 4;
    printf("The value of a and b before swap is %d and %d\n", x, y);
    // wrong_swap(x,y); //will not work due to call by value
    swap(&x, &y);  /* &a and &b are only the memory address of int a and int b.*/
    printf("The value of x and y after swap is %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;  /* here we are passing the address to the function so now the
                  swap function can modify the value of a variable in calling
                  function using * and & operator.*/ 
    temp = *a;
    *a = *b;
    *b = temp;
}