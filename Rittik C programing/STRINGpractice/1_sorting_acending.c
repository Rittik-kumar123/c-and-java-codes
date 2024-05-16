#include<stdio.h>
#include<string.h>
int main()
{
    int arr[20]={34,35,23,64,65,87,54,9,86,43,45,21,98,8};
    int arrsorted[20];
    for(int i=0;i<14;i++)
    {
        int small=arr[i];
        for(int j=i;j<14;j++)
        {
            if(small>arr[j])
            small=arr[j];
        }printf("%d < ",small);
    }
    return 0;
}