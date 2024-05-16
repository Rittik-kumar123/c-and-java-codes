// POINTER TO POINTER 

#include<stdio.h>

int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    //here in q pointer where adress of p is store and in that adress another adress of a is store and in that adress the value of a is store 
    int ***r=&q;
    *p=23;
    **q=34;
    ***r=55;
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n %d\n",*(*q),*(*(*r)));
    printf("address of q=%x %x\n",r,&q);
    // here if we write &r then we got the adress of r but here only
   //  r has been written that mean the adress or the value that is stored in that r it will be printed.
    printf("Address of p=%x %x\n",q,&p);
    return 0;
}