#include<stdio.h>
int sum(int a, int b);  /*sum is an function which takes a and b as input and returns an integer as an 
                          output and this is the function prototype declaration
                          --> Here a and b are called parameters( place holder )*/
int main()
{
    int c,d,e;
    printf("Enter any two number:");
    scanf("%d %d",&c,&d);
    e=sum(c,d);  /*FUNCTION CALL. AND --> here c and d are called arguments( actual values that will be
                  used in the function to give the result )the value of c will be
                  assigned to int a and the value of d will be assigned to int b, in sequence*/
    printf("The sum of the two numbers you entered is %d\n",e);
    return 0;
}
int sum(int a, int b) /*FUNCTION DEFINATION --> in function defination will define the working modle of
                                                the function i.e, a general defination for every 
                                                variabl that we will assigned in sum( HERE ).*/
{
    int result;
    result= a+b;
    return result; /*The value of result that we receive from here will be taken by the function 
                     sum(c,d) and will be equated with e as we have declared, the variables 
                     that we are using here have no relation with the variables that we have 
                     assigned in the main() function.
                     --> the variables that we use here are not related with those thar we have used
                     in main() means we can assign same variable for both main() and defination 
                     but they will be treated as different varaibles by the compiler*/
                    
}