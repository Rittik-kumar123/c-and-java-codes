#include<stdio.h>
#include<string.h> //To use strlen() we have to include string.h hearder file
int main()
{
    char s[] = "Rahul Kumar";  /* s[] and *s both can be used */
    int a = strlen(s); /* strlen function tells the length of the string excluding the null
                        character i.e., \0 */
    printf("The length of the string you entred is %d\n",a);
    return 0;
}