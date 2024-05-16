#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of element you want to store\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements you enterd is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
        
    {
        int count=1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1; // here i have assumed that input elements are always +ve.
                }
            }
        }
        if(a[i]!=-1)
        printf("%d->%d\n",a[i],count);
    }
    return 0;
}