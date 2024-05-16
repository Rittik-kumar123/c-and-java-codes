#include<stdio.h>
// void printArray( int *ptr, int n)
// {
//     for( int i=0;i<n;i++)
//     {
//         printf("The value of Element %d id %d\n", i+1,*(ptr+i));/* *ptr will point to the base memory
//                                                                     address of arr array*/
//     }
// }
void printArray(int ptr[],int n) /*ptr[] is array it is prototype declaration here ptr[] is the name
                                   of the variable only as we earlier used to decalre an int a or b */
{
    for(int i=0;i<n;i++)
    {
        printf("The value of element %d is %d\n",i+1,ptr[i]);
    }
}
int main()
{
    int arr[]={13,54,645,344,656,764,35,66};
    printArray(arr,8); /* here *ptr is pointing arr and 8 is defining the size of the array variable
                        --> we can also increase the size of the arr varible although we have given
                        only 8 arr element to put in the array variable, in those extra blocks the 
                        compiler will allot some garbage values. it is function call */
    return 0;
}