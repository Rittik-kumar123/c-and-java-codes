//   SAME PROBLEM BUT IN THIS METHOD FIRST WE ARE STORING THE TRANSPOSE OF THE MATRIX INTO A ANOTHER MATRIX
//   AND THEN PRINTING THE NEW MATRIX.

#include<stdio.h>

int main()
{
    int matrix[2][3];
    int tmatrix[3][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the element a (%d,%d) position of the matrix:",i,j);
            scanf("%d",&matrix[i][j]);
        }printf("\n");
    }printf("The matrix is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            tmatrix[i][j]=matrix[j][i];
        }
    }printf("\nThe transpose of the given matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",tmatrix[i][j]);
        }printf("\n");
    }
    return 0;
}