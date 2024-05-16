#include<stdio.h>
#include<string.h>
 typedef struct student
{
    int roll;
    int marks;
    char subject;
}st;
int main()
{
    st s1;
    st *ptr;
    ptr = &s1;
    //(*ptr).roll = 10;
    ptr->roll = 10;      //using both way we can assign values to the variables of structure st.
    printf("Roll no of student s1 is: %d",s1.roll);
    return 0;
}