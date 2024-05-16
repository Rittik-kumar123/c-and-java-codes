  /*here we are just checking whether the programme that we coded in problem works with call by
    function or not  --> AND THE ANSWER IS NO*/
#include<stdio.h>
int newnumber(int a);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Your new number is %d\n", newnumber(a));
    printf("The value of a after function call is %d",a);
    return 0;
}
int newnumber(int a)
{
    int temp;
    temp=10*a;
    a=678;
    return temp;
}