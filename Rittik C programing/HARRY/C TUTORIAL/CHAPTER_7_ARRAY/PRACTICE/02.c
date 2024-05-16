#include<stdio.h>

int main()
{
    int mult[10];
    int n;
    printf("Enter a mumber to find its table : ");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        mult[i]=n*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%dX%d = %d\n",n,i+1,mult[i]);
    }
    return 0;
}