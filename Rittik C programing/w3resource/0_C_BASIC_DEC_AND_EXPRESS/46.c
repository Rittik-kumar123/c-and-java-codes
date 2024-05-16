#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sum=1;
    printf("Enter the no of terms you want in the expression:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        sum+=(float)(1+2*i)/(pow(2,i));
    }
    printf("%.2f",sum);
    return 0;
}