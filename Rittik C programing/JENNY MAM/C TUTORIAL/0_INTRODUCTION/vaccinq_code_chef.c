// #include<stdio.h>

// int main()
// {
//     float a=1234.5780;
//     printf("%4.2f\n",a);
//     return 0;
// }
#include <stdio.h>

int main(void) {
	int t; 
	scanf("%d",&t);
	while(t--)
	{
	    int sum=0;
	    int n,p,x,y;
	   
	    scanf("%d%d%d%d",&n,&p,&x,&y);
		int A[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	   
	    for(int i=0;i<p;i++)
	    {
	    if(A[i]==1)
	    sum+=y;
	    if(A[i]==0)
	    sum+=x;
	    }printf("%d\n",sum);
	    
	}
	// your code goes here
	return 0;
}