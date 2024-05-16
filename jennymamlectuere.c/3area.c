// area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
    int S1,S2,S3,S,AREA;
    printf("Enter the value of side\n");
    scanf("%d %d %d",&S1 ,&S2 ,&S3);
    S=S1+S2+S3/3;
    AREA=squrt(S*(S-S1)*(S-S2)*(S-S3));
    printf("Area of the triange  is %d", AREA);

    return 0 ;
}