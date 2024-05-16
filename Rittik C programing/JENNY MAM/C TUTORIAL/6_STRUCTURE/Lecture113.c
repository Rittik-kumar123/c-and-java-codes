//POINTER TO STRUCTURES.

#include<stdio.h>
 typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}st;
int main()
{
    st s1={1,"Rahul",33};
    st *ptr=&s1;

    printf("info for s1");
    printf("\n%d %s %f",ptr->rollno,ptr->name,ptr->marks);
    printf("\n%d %s %f",(*ptr).rollno,(*ptr).name,(*ptr).marks);

    return 0;
}