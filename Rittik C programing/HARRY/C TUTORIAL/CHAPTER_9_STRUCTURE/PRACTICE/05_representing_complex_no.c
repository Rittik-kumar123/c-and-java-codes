#include<stdio.h>
#include<string.h>
typedef struct complex
{
    int x;
    int y;
}cn;
int main()
{
    cn c1;
    int a,b;
    printf("Enter the real part of the complex no: ");
    scanf("%d",&a);
    printf("Enter the imaginary part of the complex no: ");
    scanf("%d",&b);
    c1.x = a;
    c1.y = b;
    printf("The complex no you entered is: (%d + %di)\n",c1.x,c1.y);
    return 0;
}