#include<stdio.h>
#include<math.h> /* math.h library function is included so that we can use 
                    pow() functin in our programme*/ 
int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d",&side);
    printf("The area of the square of side %d is %f", side,pow(side,2));
    return 0; /* Here we have used %f format specifier for the output of the pow() function becaude 
                pow() function returns double not integer*/
}