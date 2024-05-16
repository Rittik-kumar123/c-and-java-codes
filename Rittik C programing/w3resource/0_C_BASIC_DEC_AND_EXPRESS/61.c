#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    float val=sin(1/x);
    printf("%.4f",val);

    return 0;
}