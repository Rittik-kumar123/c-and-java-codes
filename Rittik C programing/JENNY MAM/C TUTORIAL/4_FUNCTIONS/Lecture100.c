//  GATE 2010

#include<stdio.h>
void f(int *p,int *q)
{
    p=q;
    *p=2;
}

int i=0,j=1; //here it i and j are global variable doesn't matter it is inside the main fun or any other fun but it has been somewhere
             //in the memory that we going to use to solve this problem.

int main()
{
    f(&i,&j);
    printf("%d %d\n",i,j);

    return 0;
}