#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 343434;
    strcpy(facebook[0].name,"RAHUL");
    return 0;
}