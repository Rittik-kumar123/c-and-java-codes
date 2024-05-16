#include<stdio.h>

int main()
{
    char s[50];
    printf("Enter your name : ");
    scanf("%s",s);                    /* In case of strings we do not need to use & along 
                                        with the varible for scanning purpose. 
                                        --> In string while using scanf() we can not store
                                        two words separated by space if we try to store
                                        it will store only first word. 
                                        --> To get rid of this problem gets and puts 
                                        function are introduced. LET US SEE.*/
    printf("Your name is %s",s);
    return 0;
}