#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    float salary;
    char name;
};
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).id = 101; or we can also write: ptr->id = 101;
    //(*ptr).id = 101;
    ptr->id = 101;
    printf("%d",e1.id);  
    return 0;
}