  /* WAP to print the matrix form of 2-D array whose elements are generalized and also print the sum of
     of all the elements of the array. */

#include <stdio.h>

int main()
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the number you want to allot to the (%d,%d) position in the array", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix form of this array is:\n");
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            sum += arr[i][j];
        }printf("\n");
    }
    printf("The sum of all the elements of this array is %d\n", sum);
    return 0;
}