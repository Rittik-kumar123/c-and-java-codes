#include<stdio.h>

int main()
{
    int a[3][3],n,m,sum=0;
   // printf("Enter the no of rows and column of the matrix:");
    //scanf("%d %d",&n,&m);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the elements of the matrix:");
            scanf("%d",&a[i][j]);
        }
    }printf("\n The Matrix you entered is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }printf("\n");
    for(int i=1;i<3;i++)
    {
        for(int j=(3-1);j>0;j--)
        {
            if((i+j>=3) && a[i][j]==0)
            //if(a[i][j]==0)
            sum+=1;
        }
    }
    if(sum==(3*3)-3-(((3*3)-3)/2))
    {printf("This is a upper triangular matrix !");}
    else
    {printf("This is not a upper triangular matrix !");}

    return 0;
}