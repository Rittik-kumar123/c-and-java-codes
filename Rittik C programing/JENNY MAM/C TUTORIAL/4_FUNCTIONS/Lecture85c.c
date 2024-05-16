#include<stdio.h>

void sum();
int main()
{
    sum();
    return 0;
}
void sum()   /* if we are defining the function below the main function without declaring the function 
                then the program will show warining (implicit declaraion of function) although it may run.
                --> So it is better to declare the function before calling the function to get rid of
                    warinigs. */ 
{
    int a,b,sum=0;
    printf("Enter any two number:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("The sum of the two number is: %d\n",sum);

}
