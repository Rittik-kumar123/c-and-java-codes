#include<stdio.h>

int main()
{
    char name[30];
    printf("Enter your name:");
    scanf("%5s",name);      // --> 5 between % and s is for scanning only 5 element from the users input data.
    printf("%s\n",name);
    printf("%.4s\n",name);  // --> here only four character from the string will be printed.
    printf("%10.3s\n",name);  /* --> here it will allot 10 blank space in the console and display 3 character
                                     form the end.*/
    printf("%s",&name[2]);    /* --> it will print the data from the address it is asked to print till the 
                                     the null character comes. */
    return 0;
}