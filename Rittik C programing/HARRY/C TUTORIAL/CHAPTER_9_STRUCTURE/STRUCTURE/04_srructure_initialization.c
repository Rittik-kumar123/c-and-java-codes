#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    float salary;
    char name[40];
};
int main()
{
    struct employee rahul = {21, 234243.433, "rahul"};
    printf("ID no is: %d\n",rahul.id);
    printf("Salary is: %.3f\n",rahul.salary);
    printf("Employee name is: %s\n",rahul.name);
    return 0;
}