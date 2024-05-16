#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char S[5];
	    scanf("%s",&S);
        char T[5];
	    scanf("%s",&T);
	    char M[5];
	    for(int i=0;i<5;i++)
	    {
	        if(T[i]==S[i])
	        M[i]='G';
	        else
	        M[i]='B';
	    }
	    for(int i=0;i<5;i++)
	    {
	        printf("%c",M[i]);
	    }printf("\n");
	}
	// your code goes here
	return 0;
}