#include <stdio.h>

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    p = &a[0][0];
    printf("the adress of p is %d\n", p);
    printf("the adress of a is %d\n", a);
    printf("the adress of a[0][0] is %d\n", a[0][0]);
    printf("the adress of a[0] is %d\n", a[0]);
    printf("the adress of a+1 is %d\n", a+1);
    // here in a the base adress of 1^st element that is a1 is store so when we add 1 on it the base adress of element 2 is been shown.
    printf("the adress of *(a+1) is %d\n", *(a+1));
    printf("the adress of &a[1] is %d\n", &a[1]);
    printf("the adress of a{1} is %d\n", *(*(a+1)));
    printf("the adress of **a is %d\n", **a);
    printf("the adress of *p is %d\n", *p);
    printf("the adress of (&a[1]+1) is %d\n", (&a[1]+1));
    printf("the adress of a[1]+1 is %d\n", a[1]+1);
}