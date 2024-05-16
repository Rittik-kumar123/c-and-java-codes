#include<stdio.h>
 typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}st;
int main()
{
    st s[2];
    for( int i=0;i<2;i++)
    {
        printf("enter data of student %d: ",i+1);
        scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for(int i=0;i<2;i++)
        {
            printf("Roll NO is: %d\n Name is: %s\n Marks is: %f\n",s[i].rollno,s[i].name,s[i].marks);
        }
    return 0;
}