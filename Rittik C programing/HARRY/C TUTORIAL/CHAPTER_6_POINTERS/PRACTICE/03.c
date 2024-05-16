   /* WRITING A PROGRAM TO CHANGE THE VALUE OF A VARIABLE TO TEN TIMES OF ITS 
    CURRENT VALUE USING THE CONCEPT OF CALL BY REFERENCE OF FUNCTION*/
#include<stdio.h>
int newnumber(int *a);
int main()
{
    int i;
    printf("Enter a number :");
    scanf("%d",&i);
    printf("your result is %d", newnumber(&i));
    //printf("Your result is %d ",10*i);
    return 0;
}
int newnumber(int *a)
{
    int temp;
    temp = 10*(*a);
    return temp;
}