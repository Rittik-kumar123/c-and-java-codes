#include<stdio.h>

int main()
{
    int p,q,r,s;
    printf("Enter respective values of p,q,r,s :");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if(p%2==0 && q>0 && r>0 && s>0)
    {
        if(q>r && s>p && (r+s)>(p+q))
        printf("Correct Values!");
        else
        printf("Wrong Values");
    }
    else
    printf(" Please enter correct values!");
    return 0;
}