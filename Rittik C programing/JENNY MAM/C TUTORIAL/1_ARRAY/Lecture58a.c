// take a 3X3 matrix and find the sum of the rows and columns.

#include<stdio.h>

int main()
{
    int matrix[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element at (%d,%d) position of the matrix:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }printf("\n");
    }
    for(i=0;i<3;i++)
    { int rowsum=0, columnsum=0;
        for(j=0;j<3;j++)
        {
            rowsum+=matrix[i][j];
            columnsum+=matrix[j][i];
        }printf("SUM OF ROW = %d  ,  SUM OF COLUMN = %d\n",rowsum,columnsum);
    }
    return 0;
}