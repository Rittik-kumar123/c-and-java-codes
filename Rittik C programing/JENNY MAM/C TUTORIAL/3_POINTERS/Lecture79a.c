#include<stdio.h>

int main()
{
    //const int a = -11;  // if we declare int as const then it will be used as read-only. We cant alter its 
                        // value further.
    int a = -11;                    
    //const int *p = &a;  // to access any variablr through pointer we have to declare the datatype of the
                        // pointer same as that of the variable.
    int *p = &a;                    
    *p=10;
    printf("%d",a);
    return 0;
}