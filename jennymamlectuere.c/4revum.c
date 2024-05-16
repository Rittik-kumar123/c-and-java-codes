#include <stdio.h>
#include <math.h>

int main()
{
    int num,d5,d4,d3,d2,d1 ;
    long int revum;
    printf("Enter the number");
    scanf("%d",&num);
    d5=num%10;
    num =num/10;
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=d2%10;
    num=num/10;
    d1=num%10;
    revum =d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("revum of num is %d",revum);


    return 0;
}