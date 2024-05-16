//  SUBTRACTIOIN OF TWO POINTERS.

#include<stdio.h>

int main()
{
    int a[]={1,3,5,6,-1,22,55};
    int *p=&a[0];   // we can use only *p=a it will also point to the base address of the array.
    int *q=&a[4];
    printf("q-p = %d\n",q-p);
    printf("p-q = %d\n",p-q);
    printf("value to which q is pointing is: %d\n",*q);
    q=q-2;
    printf("value at which q is pointing is: %d\n",*q);
    p=p+2;
    printf("value at which p is pointing is: %d\n",*p);
    q=q-3;  // --> This will give a garbage value as q is now pointing to a position which is not initialized
            //     in this program. 
    printf("value at which q is pointing is: %d\n",*q);
    return 0;
}