//GATE 2000

#include<stdio.h>

int incr(int i)
{
    static int count=0;  /* Static int count define that the value of the count variable
                            will not get vanished as the program will exit from this fun.
                            The value stores in this count var will be stored in the memory
                            it will not initilise from 0 always, it will initilise from 
                            the previous value stored in this variable.
                            --> static variable menas the life time of the var is thoughout
                                the program. */
    count = count+i;
    return count;
}
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    j=incr(i);
    printf("j=%d\n",j);
    return 0;
}