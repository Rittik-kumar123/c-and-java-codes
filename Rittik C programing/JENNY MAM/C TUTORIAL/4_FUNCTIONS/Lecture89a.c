//   NO ARGUMENT WITH RETURN TYPE function.

#include<stdio.h>

int sum(void);

int main()
{
    int s;
    s=sum();
    printf("sum=%d",s);
    return 0;
}
int sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    return sum;  /* here the value of b will be returned as the comma(,) operator executes the first
                        operand then discard it value then executes the next operand then also discard 
                        its value it continues till it reaches the last element, so at last it will 
                        return the value associated with the last operand. Here that is 'b' having 
                        value 7. */
    printf("Hi");  // here this statement will not be executes as the program terminates after executing
                   // return value.
}