#include<stdio.h>

int main()
{
    int n,rem,x;
    printf("Enter the amount:");
    scanf("%d",&n);
    if(n>=0)
    {
        rem=n%100;
        x=n/100;
        printf("%d Notes of 100\n",x);
        n=rem;

            rem=n%50;
            x=n/50;
            printf("%d Notes of 50\n",x);
            n=rem;
        
            rem=n%20;
            x=n/20;
            printf("%d Notes of 20\n",x);
            n=rem;
        
            rem=n%10;
            x=n/10;
            printf("%d Notes of 10\n",x);
            n=rem;
    
            rem=n%5;
            x=n/5;
            printf("%d Notes of 5\n",x);
            n=rem;
        
            rem=n%2;
            x=n/2;
            printf("%d Notes of 2\n",x);
            n=rem;

            rem=n%1;
            x=n/1;
            printf("%d Notes of 1\n",x);
            n=rem;
    }
    return 0;
}