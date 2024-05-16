#include<stdio.h>
typedef struct time
{
    int hours;
    int minutes;
    int seconds;
}tc;
void display(tc t)
{
    printf("The time you entered is: %d:%d:%d\n",t.hours,t.minutes,t.seconds);
}
 int timecompare(tc t1,tc t2)
 {
     if(t1.hours>t2.hours)
     {return 1;}
     if(t1.hours<t2.hours)
     {return 2;}
     if(t1.minutes>t2.minutes)
     {return 1;}
     if(t1.minutes<t2.minutes)
     {return 2;}
     if(t1.seconds>t2.seconds)
     {return 1;}
     if(t1.seconds<t2.seconds)
     {return 2;}
     return 0;
 }
int main()
{
    tc t1 = {11,33,44};
    tc t2 = {22,33,45};
    display(t1);
    display(t2);
    int a = timecompare(t1,t2);
    printf("%d",a);
    return 0;
}       