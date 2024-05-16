#include<stdio.h>
void printArray(int ptr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("The value of the element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=4444; //This value will be changed in arr array of main as well
}
int main()
{
    int arr[]={ 54,65,36,76,67};
    printArray(arr,5);
    printf("%d",arr[2]);
    return 0;
}