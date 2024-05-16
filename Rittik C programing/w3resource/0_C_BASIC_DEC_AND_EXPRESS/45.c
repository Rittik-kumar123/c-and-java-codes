#include<stdio.h>

int main()
{
    int n;
    float sum=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=(float)1/i;  // here when i used (1/i) then the program was not working. why?
    }printf("%.2f",sum);
    return 0;
}