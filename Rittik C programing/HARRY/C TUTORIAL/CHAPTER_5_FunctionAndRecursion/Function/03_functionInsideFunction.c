// HERE WE ARE GOING TO LEARN HOW TO CALL A FUNCTION INSIDE ANOTHER FUNCTION.
#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();    // here we have called goodmorning().
    return 0;
}
void goodmorning()
{
    printf("Hello RAHUL good Morning\n");
    goodafternoon();  // here we have called goodafternoon() inside the goodmorning().
}
void goodafternoon()
{
    printf("Hello RAHUL good afternoon\n");
    goodnight();      // here we have called goodnight() inside the goodafternoon().
}
void goodnight()
{
    printf("Hello RAHUL good night\n");
}