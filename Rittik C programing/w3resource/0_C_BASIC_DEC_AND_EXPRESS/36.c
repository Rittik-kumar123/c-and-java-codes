// password check program!!!!
#include<stdio.h>

int main()
{
    int a[4];
    printf("enter your password:\n");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]!=(i+1))
        {
            printf("Incorrect Password!");
            break;
        }
    }
    if(a[3]==4)
    printf("Correct Password!");
    return 0;
}