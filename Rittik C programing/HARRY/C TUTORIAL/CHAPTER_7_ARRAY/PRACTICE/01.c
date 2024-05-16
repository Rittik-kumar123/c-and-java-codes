#include <stdio.h>

int main()
{
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr=list;
    printf("%d\n",*ptr);
    *ptr++;
    *ptr++;
    printf("%d\n",*ptr);
    return 0;
}