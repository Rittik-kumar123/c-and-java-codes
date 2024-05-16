#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample2.txt","w"); /* here we have created a new text file in this folder
                                       by using the writing mode in the fopen() function. 
                                       the name of the new file being created will be of the same name
                                       the name we will use for the file in the fopen function. */
    return 0;
}