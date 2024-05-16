// passing array as argument

#include <stdio.h>
int avg(int[], int);
int main()
{
    int average, size;
    int marks[5] = {10, 15, 20, 30, 45};
    size = sizeof(marks) / sizeof(marks[0]);
    average = avg(marks, size);
    printf("avg is %d\n", average);
    printf("inside main size of array is (in bytes) is: %d\n", sizeof(marks));
    return 0;
}
int avg(int marks[], int size)
{
    int i, sum = 0;
    int average = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + marks[i];
    }
    average = sum / size;
    printf("inside avg size of array is (in bytes) is: %d\n", sizeof(marks));
    return average;
}