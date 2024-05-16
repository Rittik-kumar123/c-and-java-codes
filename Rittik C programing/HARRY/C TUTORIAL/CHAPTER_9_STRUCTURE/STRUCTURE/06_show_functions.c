#include<stdio.h>
#include<string.h>   /* any word along with () small braces is treated as a function here show is a function
                        created or made by us. */
                 
struct employee
{
    int id;
    float salary;
    char name[40];
};
void show(struct employee emp) //function prototype and it's defination.
{
    printf("The id of the employee is: %d\n",emp.id);
    printf("The salary of the employee is: %f\n",emp.salary);
    printf("The name of the employee is: %s\n",emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->id = 101;
    ptr->salary = 4353534;
    strcpy(ptr->name,"Rahul");
    show(e1);                           //function call.

    return 0;
}