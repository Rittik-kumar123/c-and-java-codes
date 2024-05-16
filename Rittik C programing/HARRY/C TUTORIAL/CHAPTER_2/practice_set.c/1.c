//write a programme to check whether a number is divisible by 97 or not
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to check itd divisiblity by 97:");
    scanf("%d",&a);
    if(a%97==0)
    {
        printf("DIVISIBLE");
    }
    else
    {
        printf("NOT DIVISIBLE");
    }
    
}