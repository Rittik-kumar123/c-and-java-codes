#include<stdio.h>

int main()
{
    int x,y;
    char operator;
    printf("The tool you want to use: ");
    scanf("%c",&operator);
    printf("Enter the operands: \n");
    printf("Enter the first element: ");
    scanf("%d",&x);
    printf("Enter the second element: ");
    scanf("%d",&y);
    

    switch(operator)
    { 
        case '+' :
        printf("The sum of %d and %d is %d",x,y,x+y);
        break;
        case '-' :
        printf("The difference of %d and %d is %d",x,y,x-y);
        break;
        case '*' :
        printf("The multiplication of %d and %d is %d",x,y,x*y);
        break;
        case '/' : 
        printf("The division of %d and %d is %d",x,y,x/y);
        break;
        default : 
        printf("Please use the correct operator.");

    }

    

    return 0;
}