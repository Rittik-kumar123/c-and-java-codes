# include<stdio.h>

int main()
{
    int a[5],i;
    int *p=a;
    printf("enter the elements in the array:\n");
    // *(p+i) can also be written as i*(p)
    for ( i = 0; i < 5; i++)
    {
        scanf("%d\t",&*(p+i));
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",*(p+i));
    }
    
    
return 0;
}
