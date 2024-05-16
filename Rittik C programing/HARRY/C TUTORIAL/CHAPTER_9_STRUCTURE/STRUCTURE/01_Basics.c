#include<stdio.h>
#include<string.h>

struct employee   // --> HERE IT IS JUST DECLARATION OF THE NEW DATATYPE WE NAMED EMPLOYEE.
{
    int code;
    float salary;
    char name[20];
};
 
int main()
{
    struct employee e1;  /* (struct employee) is a variable identity just like an int variable or float 
                            variabel or char variable. And e1 is a variable of the struct employee identity.
                            just as i we use for integers and c for character. */
    e1.code = 100;
    e1.salary = 3444.434;
    //e1.name = "Rahul";  --> it will not work.
    strcpy(e1.name, "Rahul");

    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}