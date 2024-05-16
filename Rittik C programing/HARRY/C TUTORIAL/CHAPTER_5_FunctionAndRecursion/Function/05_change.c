#include<stdio.h>
void change(int b);
int main()
{
    int b=344;
    printf("The vlaue of b before change is %d\n",b);
    change(b);
    printf("The value of b after change is %d\n",b);
    return 0;
}
void change(int b)
{
    b=77;
}                 /* here we will see that the value of the b won't change as we are trying to assign b a
                     new value in the function. From here we can conclude that inside a function only the
                     copy of the original value is used. So any change to that value will not alter the
                     original value. */