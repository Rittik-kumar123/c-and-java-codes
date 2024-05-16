#include<stdio.h>

int main()
{
    int number,i,a;
    printf("enter a number");
    scanf("%d",&number);
    for(i=1;i<=10;i++)    
    {
      a=number*i;
      printf("%dx%d=%d\n",number,i,a);  
        
    }
    return 0;
}