// DESIGNATED INITILIZATION IN STRUCTURE IN C.

#include<stdio.h>
struct question
{
    int a;
    float b;
    int c;
};
int main()
{
    struct question q={ .b=1, .c=10, .a=15};  // order of initilization doesn't matter as we are assigning 
                                              // members of the struct question with .name
    printf("%d %f %d\n",q.a,q.b,q.c);  
    return 0;
}
