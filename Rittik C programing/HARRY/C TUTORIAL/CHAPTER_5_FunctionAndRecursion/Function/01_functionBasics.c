#include<stdio.h>
void display(); //Function Prototype
int main()
{
    int a;
    printf("Initializing display function\n");
    display(); //Function Call : the body of this function is defined outside the main function
    printf("Display function finished its work\n");
    return 0;
}
/*Function defination : the outputs of this setup will reflect in the position where we have called 
the function*/
void display()
{
    printf("This is display\n");
}