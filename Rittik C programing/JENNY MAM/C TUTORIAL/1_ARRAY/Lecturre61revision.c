#include <stdio.h>

int main()
{
    int a[3][3], b[3][2], c[3][2];
    printf("Enter the elements of 1st matrix:\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd element:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe 1st matrix you entered is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }printf("\n");
    }
    printf("\nThe 2nd matrix you enterd is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }printf("\n");
    }
    printf("\nThe multiplication of 1st and 2nd matrix is: \n");
    
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<2;k++)
        {
            int sum=0;
            for(int j=0;j<3;j++)
            {
                sum += a[i][j]*b[j][k];
            }c[i][k]=sum;
            
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<2;k++)
        {
            printf("%d\t",c[i][k]);
        }printf("\n");
    }

    return 0;
}