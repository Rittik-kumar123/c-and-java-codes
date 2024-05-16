#include<stdio.h>
int sum(int *a, int *b);
int average(int *a, int *b);
int main()
{
    int i,j;
    printf("Enter first number: ");
    scanf("%d",&i);
    printf("Enter second number: ");
    scanf("%d",&j);
    printf("The sum of %d and %d id %d",i,j,sum(&i,&j));
    printf("The average of %d and %d is %d",i,j,average(&i,&j));
    return 0;
}
int sum(int *a, int *b)
{
    int temp;
    temp = *a+*b;
    return temp;
}
int average(int *a, int *b)
{
    int temp;
    temp = (*a+*b)/2;
    return temp;
}