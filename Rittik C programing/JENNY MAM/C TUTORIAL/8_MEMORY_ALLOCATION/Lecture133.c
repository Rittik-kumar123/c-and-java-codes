// DYNAMIC MEMORY ALLOCATION USING MALLOC()
// --> these funcions are defined in stdlib.h header file so we have to include it.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("Enter total number of values:");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));//prototype declaration of malloc

    printf("\nenter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n The entered values are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);

    return 0;
}