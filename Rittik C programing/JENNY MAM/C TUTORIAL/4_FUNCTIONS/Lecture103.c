//  APPLICATION OF FUNCTION POINTER AND ARRAY OF FUNCTION POINTER.

#include<stdio.h>

void add(int a ,int b){printf("%d\n",a+b);}
void sub(int a , int b){printf("%d\n",a-b);}
void mult(int a,int b){printf("%d\n",a*b);}
void div(int a,int b){printf("%d\n",a/b);}

int main()
{
    int ch,a,b;
    void (*fptr[10])(int ,int)={add,sub,mult,div}; // initilisation of array function pointer.
    printf("Enter:\n 0 for add\n 1 for sub\n 2 for mult\n 3 for div\n");
    printf("Enter choice:");scanf("%d",&ch);

    if(ch<=3 && ch>=0)
    {
        printf("Enter operanda:"); scanf("%d %d",&a,&b);
        (*fptr[ch])(a,b);   // function call using the function pointer. 
    }
    else
    printf("Enter invalid choise:");

        
    return 0;
}