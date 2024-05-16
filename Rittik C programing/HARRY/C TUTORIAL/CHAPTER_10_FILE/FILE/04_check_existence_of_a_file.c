#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1;
    int num2;
    //ptr = fopen("Rahul.txt", "r"); this file is allready present in the system so else will execute.
    ptr = fopen("random.txt","r");  // as this file doesn't exist --> output will be NULL so if() will execute.
    if (ptr == NULL)                             /* We know that if the file doesn't exist
                                                    it will return NULL. */                          
    {
        printf("The file doesn't exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        printf("The value of num1 is %d\n", num1);
        printf("The value of num2 is %d\n", num2);
    }
    return 0;
}