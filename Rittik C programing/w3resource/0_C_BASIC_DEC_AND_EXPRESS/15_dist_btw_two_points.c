#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the coordinates of first point (x,y):");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of second point (x,y):");
    scanf("%d%d",&x2,&y2);
    float z = pow((x2-x1),2) + pow((y2-y1),2);
    float dist = sqrt(z);
    printf("%.4f",dist);
    return 0;
}