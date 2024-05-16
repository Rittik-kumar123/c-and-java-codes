#include<stdio.h>
int main()
{
    int percentage;
    printf("Enter your percentage:");
    scanf("%d",&percentage);
    switch (percentage/10) /* here let we enter the value of percentage be 98, now 98/10 = 9.8 --> 9 as 
                              switch case deals only with integers. So all the values which are greater 
                              than x and less than x+1 will be taken as x under the switch statement. */
    {
    case 9: 
    printf("A");
    break;
    case 8:
    printf("B");
    break;
    case 7:
    printf("C");
    case 6:
    printf("D");
    default:
    printf("F");
    }
}