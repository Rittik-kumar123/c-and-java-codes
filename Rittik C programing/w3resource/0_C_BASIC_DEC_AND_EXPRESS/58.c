#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements you want to store - \n");
    scanf("%d", &n);
    float a[n];
    printf("Enter the elements - \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    float small = a[0];
    float large = a[0];
    for (int i = 0; i < n; i++)
    {

        if (a[i] < small)
        {
            small = a[i];
        }
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    printf("The difference of the maximum and the minimum of elements you entered is -> %f",(large-small));
    return 0;
}