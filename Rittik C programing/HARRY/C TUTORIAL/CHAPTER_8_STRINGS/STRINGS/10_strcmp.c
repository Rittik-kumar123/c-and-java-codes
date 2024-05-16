#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Rahul";
    //char s2[]="Rahll";   output is 1
    //char s2[]="RaHul";   output is 1
    char s2[]="Rakul";     //output is -1  
    int val = strcmp(s1,s2);           /* strcmp() compares position by position element of both the 
                                          strings according to the ascii value assigned to the element
                                          if the ascii value of the same position element of 1st string
                                          is equal to the ascii value of that of the 2nd string then
                                          the output will be 0. And if 1st>2nd then the output will
                                          be 1 and if 1st<2nd then the output will be -1. */
    printf("Now the val is %d", val);
    return 0;
}