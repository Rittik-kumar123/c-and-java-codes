#include <stdio.h>
#include <string.h>

typedef struct employee             //forming structure data type.
{                                   /* using typedef we can shorten the name of the struct variabel that we
                                       have made according to our desire. This will help us not to write 
                                       the whole variable name wherever it's needed. */
    int id;
    float salary;
    char name[20];
} emp;                              // here we have given the name emp to our struct employee variable.
void show(emp e1)                   //function prototype and declaration or defination.
{
    printf("The id of employee is: %d\n", e1.id);
    printf("The salary of employee is: %f\n", e1.salary);
    printf("The of employee is: %s\n", e1.name);
}
int main()
{
    emp e1;                         //declaring e1 and *ptr.
    emp *ptr;
    ptr=&e1;                        //pointing ptr to e1.
    ptr->id = 101;                  //setting the values for e1.
    ptr->salary = 343334;
    strcpy(ptr->name,"Rahul");
    show(e1);                       //function call
    return 0;
}