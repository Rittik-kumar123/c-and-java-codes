#include<stdio.h> 
                 /*Enter your name : Rahul Kumar  (IF WE USE PUTS() THE RESULT IS THIS)
                  Rahul Kumar
                  364902912 (random memory address.)
                  
                  Enter your name : Rahul Kumar   (IF WE DON'T USE PUTS() THE RESULT IS)
                  1033895264 */
int main()
{
    char s[50];
    printf("Enter your name : ");
    gets(s);
    puts(s); //puts function sends the command directly to the next line
    printf("%u",&s);  // checking the memory address of s  
    return 0;
}