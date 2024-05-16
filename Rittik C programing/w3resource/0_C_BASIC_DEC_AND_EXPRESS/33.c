#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
     int s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element at %dth positon",i+1);
        scanf("%d",&s[i]);
    }
    int large=s[0];
    int position=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>large)
        {
            large=s[i];
            position=i+1;
        }
    }
    printf("%d\n",large);
    printf("%d",position);
    return 0;
}