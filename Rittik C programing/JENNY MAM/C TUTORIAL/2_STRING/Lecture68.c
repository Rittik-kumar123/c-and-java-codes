#include<stdio.h>
#include<string.h>

int main()
{
    int count;
    char s1[20];
    char s2[20];
    printf("Enter the data of string 1:\n");
    gets(s1);
    printf("Enter the data of string 2:\n");
    gets(s2);
    for(int i=0; s1[i]!='\0' || s2[i]!='\0' ;i++)    /* here if we use and operator in the place of or 
                                                        operator then and if the strings will not be same
                                                        then also the output of this program will be
                                                        same as this for loop will run until the 
                                                        corresponding characters of both the strings are
                                                        same and as soon as it indentify the end of any 
                                                        string the loop will terminate. */
    {
        if(s1[i]!=s2[i])
        {
            count=1;
            break;    // here we have used break to get out of the for loop as soon as it find a different
                      // character while comparing both the strings.
        }
    }
    if(count==1)
    {
        printf("Both the strings are not same ");
    }
    else
    {
        printf("Both the strings are same ");
    }
    return 0;
}