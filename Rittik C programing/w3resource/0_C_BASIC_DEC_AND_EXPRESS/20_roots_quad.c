// Program to find the roots of a quadratic equation.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("ax^2+bx+x\n");
    printf("Enter respective value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    if(sqrt(pow(b,2)-4*a*c)>=0)
    {
        float root1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        float root2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("root1=%.2f\nroot2=%.2f",root1,root2);
    }
    else
    printf("This equation hasn't any real roots!");
    return 0;
}