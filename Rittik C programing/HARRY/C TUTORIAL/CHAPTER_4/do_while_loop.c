#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Enter n value:");
    scanf("%d", &n);
    do      //first condition will always be applied
    {
        printf("%d\n", i);
        if(i==10)
        {
            break;
        }
        i++;
    } while (i <= n);

    return 0;
}