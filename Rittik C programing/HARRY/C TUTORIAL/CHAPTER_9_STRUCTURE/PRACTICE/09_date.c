#include<stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
}dt;

void display(dt d)
{
    printf("The date is: %d/%d/%d\n", d.date, d.month, d.year);
}

int datecompare( dt d1, dt d2 )
{
    if(d1.year>d2.year) //comparison on the basis of year.
    {
        return 1;
    }
    if(d1.year<d2.year) 
    {
        return -1;
    }
    if(d1.month>d2.month) //comparison on the basis of month.
    {
        return 1;
    }
    if(d1.month<d2.month)
    {
        return -1;
    }
    if(d1.date>d2.date)   //comparison on the basis of date.
    {
        return 1;
    }
    if(d1.date<d2.date)
    {
        return -1;
    }
    return 0;             // if both date are same the function returns 0.
}

int main()
{
    dt d1 = { 11,02,2022 };
    dt d2 = { 1,05,2021 };
    display(d1);
    display(d2);
    int a = datecompare(d1,d2);
    printf("Date comparison function returns: %d", a);
    return 0;
}