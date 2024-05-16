#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    char month[10];
    int date;
    int year;
    int countrycode;
    int mobile;
    printf("Enter your name:");
    gets(name);
    printf("date of birth in:\n Month name\n date\n year\n");
    scanf("%s %d %d",&month,&date,&year);
    printf("Enter your country code and mobile number:");
    scanf("%d %d",&countrycode,&mobile);
    printf("Name  : %s\n DOB  : %s %d, %d\n Mobile  : %d-%d",name,month,date,year,countrycode,mobile);
}