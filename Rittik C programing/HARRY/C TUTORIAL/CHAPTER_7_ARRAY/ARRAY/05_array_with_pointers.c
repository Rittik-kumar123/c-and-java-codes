#include <stdio.h>

int main()
{
    int marks[5];
    int *ptr;
    ptr = &marks[0]; /* here we can use only marks in the place of marks[0] as pointer to marks will 
                        also point to the base memory address i.e., marks[0]*/
    for ( int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for student %d: \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("The value of marks obtained by student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}