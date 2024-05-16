#include<stdio.h>
int search(int arr[], int n)  /* here in place of arr[] we can also use *arr both results same*/
{
    int count = 0;              //FUNCTION PROTOTYPE DECLARATION AND DEFINATION 
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count=count+1;
        }
        
    }
    return count;
}
int main()
{
    int arr[]={1,3,5,-3,-5,-45,5,6,9,89,8,-54};
    search(arr,12); //function call
    printf("The number of +ve integers in this array is %d\n",search(arr,12));
    return 0;
}