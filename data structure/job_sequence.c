#include<stdio.h>
int main()
{
    int job;
    printf("Enter Number Of jobs: ");
    scanf("%d",&job);
    printf("Enter job id,deadline and profit: \n");
    int i,j,dmax=0;
    int job_id[job],deadline[job],profit[job];
    for(i=0;i<job;i++)
    {
        scanf("%d %d %d",&job_id[i],&deadline[i],&profit[i]);
    }
    for(i=0;i<job;i++)
    {
        for(j=0;j<job-1;j++)
        {
            if(profit[j]<profit[j+1])
            {
                int temp=profit[j];
                profit[j]=profit[j+1];
                profit[j+1]=temp;

                temp=job_id[j];
                job_id[j]=job_id[j+1];
                job_id[j+1]=temp;

                temp=deadline[j];
                deadline[j]=deadline[j+1];
                deadline[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<job;i++)
    {
        if(deadline[i]>dmax)
        {
            dmax=deadline[i];
        }
    }
    int time_slot[dmax],tp=0,k;
    for(i=0;i<dmax;i++)
    {
        time_slot[i]=0;
    }
    for(i=0;i<job;i++)
    {
        k=deadline[i]-1;
        while(k>=0)
        {
            if(time_slot[k]==0)
            {
                time_slot[k]=job_id[i];
                tp=tp+profit[i];
                break;
            }
            else
                k--;
        }
    }
    printf("Total profit is: %d.\n",tp);

}