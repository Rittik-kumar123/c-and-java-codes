//  NO ARGUMENT NO RETURN TYPE FUNCTION 

#include<stdio.h>

void sum(void); // no(void) argument no(void) return type function.

void main()     // here we have changed the return type of main from int to void, without removing 
                // return 0; inside the main function then it was showinf some error. But after removing
                // return 0; from the main function the program ran smoothly.
{
    sum();        
}
void sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d\n",sum);
}