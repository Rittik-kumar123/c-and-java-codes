#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array you want to create:\n");
    scanf("%d",&n);
    int a[n];
    int *p=a;
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]); // it will read same value using &a[i],(a+i),(i+a),(p+1),&p[i].
    }
    printf("The elements of the array you entered is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",i[p]); // we will get same value using both *(p+1),*(q+1),i[a] and i[p].
    }
    return 0;
}