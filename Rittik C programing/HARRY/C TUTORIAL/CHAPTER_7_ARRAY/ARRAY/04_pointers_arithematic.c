#include<stdio.h>

int main()
{
     //int a=3;
     char a=55;
     //int *ptr=&a;
     char *ptr=&a;
     printf("The value of ptr is %u\n", ptr);
     // ptr++;  ptr++ is pointing to the next block to which earlier *ptr was pointing
                 /*--> Here we can also notice that the address of *ptr++ is 4+ the address of *ptr it 
                 indicates that in this compiler the memory alloted to a int variable is 4 bytes */
     // ptr++;
     ptr=ptr+2;
     printf("The value of ptr id %u\n", ptr);
     return 0; 
 }
 