#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Rittik.txt","r");                   // Rahul.txt file is pre created in the system to use read.
    fscanf(ptr, "%d", &num);                        //fscanf is a function used to scan data from a file.
    fscanf(ptr,"%d",&num2);                         /* here 1st num variable will store the first integer present
    //fclose(ptr); -->we can use it here also.         in the file. and the 2nd num variable i.e., num2 will 
                                                       store 2nd integer present in the file. similarly for the 
                                                       further integers present in the file. */
    printf("The value of num is %d\n",num);  
    printf("The value of num2 id %d\n",num2);
    fclose(ptr);                             /* after taking desired amount of data (i.e., after reading the data) 
                                                from a file we must close the file as after closing the file it will 
                                                lock/save the recources used or taken from the file.  */
    return 0;
}