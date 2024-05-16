#include<stdio.h>
 typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}st;

// we can initialize s1 and s2 here i.e., outside the main also. The output will be same.

int main()
{
    st s1={1,"Rahul",99.00};
    st s2={2,"Kumar",98.50};
    st s3;
    //s3=s1;  // here respective element data of s1 will copied to s3.
    st s4={4}; //4 will be alloted to the int roll no, name will be init with null and marks with zero(0).
    //st s4={"Rahul"};

    printf("Enter details of s3:");  //run time initialization.
    scanf("%d %s %f",&s3.rollno,s3.name,&s3.marks);

    printf("Info for s1:");
    printf("\n %d %s %f", s1.rollno,s1.name,s1.marks);
    printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
    printf("\n %d %s %f",s3.rollno,s3.name,s3.marks);
    printf("\n %d %s %f",s4.rollno,s4.name,s4.marks);
    return 0;
}