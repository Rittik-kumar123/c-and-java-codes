                                    //TRANSPOSE OF A MATRIX
#include<stdio.h>

int main()
{
    int matrix[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the element at (%d,%d) position of the (2X3)matrix:",i,j);
            scanf("%d",&matrix[i][j]);

        }
    }printf("The 2X3 matrix you entered is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }printf("\n");
    }printf("The transpose of the given matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",matrix[j][i]);   /* Here we are taking jxi matrix so to print the element of 
                                              first column of the original matrix as the first row of the
                                              transpose matrix. */
        }printf("\n");
    }
    return 0;
}