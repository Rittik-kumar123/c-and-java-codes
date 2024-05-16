#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5},i;
    int *p;
    //here in int*p p is a pointer to a variable whose datatype is integer 
    p=a;
    printf("the adress of a is : %d\n",a);
    printf("the value of a is : %d\n",*a);
    p++;
    // we can't use a++ as the base adress of array is fixed we can't change it
    //we can increment and decrement the pointer but not a pointer
    printf("the adress of a is : %d\n",&a);
    // &a this store the base adress of the 1d array.
    printf("the adress of p is : %d\n",p);
    printf("the value of p is : %d\n",*p);
    printf("the adress of p is : %d\n",&p);
    printf("the adress of a is : %d\n",&a);
    printf("the adress of a is : %d\n",*a+1);
    // *(&a+1) gives the adress of a random or a garbage variable. 
    printf("the adress of a is : %d\n",*(&a+1));

    printf("the values of array:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    



    return 0;
}