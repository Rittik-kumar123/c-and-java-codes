#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    (a<5)? printf("The number you entered is less then 5"): printf("The number you entered is not less than 5");
    return 0;
}