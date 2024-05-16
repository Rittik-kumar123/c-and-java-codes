// writing a program to check whether a given number is prime or not using loops//
#include <stdio.h>

int main()
{
    int n, i = 2, sum = 0;
    printf("Enter n value:");
    scanf("%d", &n);
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         sum = 1;
    //         break;
    //     }
    // }
    while (i < n) // here we are writing the same programme but using different loop i.e., while loop here//
    {
        if (n % i == 0)
        {
            sum += i; 
            break;   /* if the number is divisible by any number then we should stop further checking as it
                        is allready not a prime number. */ 
        }
        i++;
    }
    if (sum == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}