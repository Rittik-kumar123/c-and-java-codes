#include<stdio.h>
#include<string.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    int *q=&a[0];
    //p=p+q; this will give error as we can't add two pointers.
    printf("Value of a is: %d\n",p-q); 
        
    printf("Address of element is: %u\n",p);
    printf("Address of element is: %u\n",&a[0]);
    p=p+2;
    printf("Value of a is: %d\n",*p);
    printf("Address of element is: %u\n",p);
    return 0;
}