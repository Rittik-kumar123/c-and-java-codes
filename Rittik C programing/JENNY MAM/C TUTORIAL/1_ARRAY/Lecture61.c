#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][2], matrix3[3][2], i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element at (%d,%d) of the 1st array:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the element at (%d,%d) of the 2nd array:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nFirst matrix you entered is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix you entered is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            int sum=0;
            for (k = 0; k < 3; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = sum;
        }
    }
    printf("\nThe multiplication of both the matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}