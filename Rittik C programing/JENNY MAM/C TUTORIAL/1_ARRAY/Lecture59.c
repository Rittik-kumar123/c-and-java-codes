                  // SUM OF TWO MATRIX GENERALISED CASE.

#include<stdio.h>

int main()
{
    int matrix1[2][3],matrix2[2][3],matrixsum[2][3];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element at (%d,%d) position of the 1st 2x3 matrix:",i,j);
            scanf("%d",&matrix1[i][j]);
        }printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element at (%d,%d) position of the 2nd 2x3 matrix:",i,j);
            scanf("%d",&matrix2[i][j]);
        }printf("\n");
    }
    printf("\nFirst matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",matrix1[i][j]);
        }printf("\n");
    }
    printf("\nSecond matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",matrix2[i][j]);
        }printf("\n");
    }printf("\n");
    printf("\nThe sum of the two matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            matrixsum[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\t",matrixsum[i][j]);
        }printf("\n");
    }
    /*printf("\nThe sum of the matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrixsum[i][j]);
        }printf("\n");
    }*/


    return 0;
}