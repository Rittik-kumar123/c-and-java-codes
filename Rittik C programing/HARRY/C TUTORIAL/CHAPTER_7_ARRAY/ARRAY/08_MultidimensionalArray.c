#include<stdio.h>

int main()
{
    int n_students = 4;
    int n_subjects = 5;
    int marks[4][5]; /* it is a multidimensional(here 2 dim) array [4] represents four rows with index
                        number 0 to 3 and [5] representd five columns with index number 0 to 4 */
    for(int i=0;i<n_students;i++)
    {
        for(int j=0;j<n_subjects;j++)
        {
            printf("Enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<n_students;i++)
    {
        for(int j=0;j<n_subjects;j++)
        {
            printf("The marks of student %d in subject %d is: %d\n",i+1,j+1,marks[i][j]);
        }
    }

    return 0;
}