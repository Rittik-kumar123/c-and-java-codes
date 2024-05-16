#include<stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication tabel of %d is :\n",num);
    for(int i=0;i<n;i++)
    {
        mulTable[i]=num*(i+1);
    }
    for(int i=0;i<n;i++)
    {
        printf("%dX%d = %d\n",num,i+1,mulTable[i]);
    }
    printf("______________________________\n\n");
}
int main()
{
    int input;
    printf("Enter the number till which you have to find the table : ");
    scanf("%d",&input);
    int mulTable[input][10];
    for(int i=0;i<input;i++)
    {
    printTable(mulTable[i],i+1,10);
    }
    return 0;
}