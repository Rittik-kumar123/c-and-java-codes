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
void merge(int l,int m,int r,float weight[],float profit[],float ratio[])
{
    int i,j;
    int n1=m+1-l;
    int n2=r-m;
    float w1[n1],w2[n2],p1[n1],p2[n2],r1[n1],r2[n2];
    for(i=0;i<n1;i++)
    {
        w1[i]=weight[l+i];
        p1[i]=profit[l+i];
        r1[i]=ratio[l+i];
    }
    for(j=0;j<n2;j++)
    {
        w2[j]=weight[m+1+j];
        p2[j]=profit[m+1+j];
        r2[j]=ratio[m+1+j];
    }
    i=0,j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(r1[i]<r2[j])
        {
            ratio[k]=r1[i];
            profit[k]=p1[i];
            weight[k]=w1[i];
            k++;
            i++;
        }
        else
        {
            ratio[k]=r2[j];
            profit[k]=p2[j];
            weight[k]=w2[j];
            k++;
            i++;
        }
    }
    while(i<n1)
    {
        ratio[k]=r1[i];
        profit[k]=p1[i];
        weight[k]=w1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        ratio[k]=r2[j];
        profit[k]=p2[j];
        weight[k]=w2[j];
        k++;
        i++;
    }
}
void mergesort(int l,int r,float weight[],float profit[],float ratio[])
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(l,m,weight,profit,ratio);
        mergesort(m+1,r,weight,profit,ratio);
        merge(l,m,r,weight,profit,ratio);
    }
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
        printf("%0.2f \t",ratio[i]);
    }
    printf("\n");
    mergesort(0,n,weight,profit,ratio);
    knapsack(n,weight,profit,capacity);
}