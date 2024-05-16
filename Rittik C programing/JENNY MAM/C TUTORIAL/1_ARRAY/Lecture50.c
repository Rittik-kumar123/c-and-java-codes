// Here we are going to print the avg of the marks of a student with taking the input data from the user.
 
#include<stdio.h>

int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the marks obtained by the student in subject %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    int sum=0;
    float avg;
    for(int i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    avg=sum/5;
    printf("The sum of the marks obtained by the student in 5 subjectd is : %d\n",sum);
    printf("The average of the marks obtained by the student in 5 subjects is : %.2f\n",avg);
    return 0;
}