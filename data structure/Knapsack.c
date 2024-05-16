# include<stdio.h>
void knapsack(int n,float weight[],float profit[],int capacity)
{
    float tp=0;
    int u=capacity,i;
    float x[n];
    for(i=0;i<n;i++)
    {
        x[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
        {
            break;
        }
        else
        {
            x[i]=1;
            tp=tp+profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    {
        x[i]=u/weight[i];
    }
    tp=tp+(x[i]*profit[i]);
    printf("\nThe result vector is: \n");
    for(i=0;i<n;i++)
    {
        printf("%0.2f \t",x[i]);
    }
    printf("\n");
    printf("The maximum profit is as follows: %f\n ",tp);
    
}
int main()
{
    int n=0,i,j;
    printf("Enter the Number of Object U want to store : ");
    scanf("%d",&n);
    float weight[n],profit[n],ratio[n],temp;
    printf("Enter the weight: \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&weight[i]);
    }
    printf("Enter the Profit: \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&profit[i]);
    }
    printf("Weight is as follows: \n");
    for(i=0;i<n;i++)
    {
        printf("%0.2f \t",weight[i]);
    }
    printf("\nProfit is as follows: \n");
    for(i=0;i<n;i++)
    {
        printf("%0.2f \t",profit[i]);
    }
    printf("\n");
    int capacity;
    printf("Enter the capacity of knapsack: ");
    scanf("%d",&capacity);
    for(i=0;i<n;i++)
    {
        ratio[i]=profit[i]/weight[i];
    }
    printf("\nRatio is as follows: \n");
    for(i=0;i<n;i++)
    {
        printf("%0.2f \t",profit[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;
                temp=profit[i];
                profit[i]=profit[j];
                profit[j]=temp;
                temp=weight[i];
                weight[i]=weight[j];
                weight[j]=temp;
            }
        }
    }
    knapsack(n,weight,profit,capacity);
}