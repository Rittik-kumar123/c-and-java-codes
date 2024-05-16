#include <stdio.h>
#include<string.h>
int main()
{
        char str[]="[()]{}{[()()]()}";
    printf("%s",str);
    int l=strlen(str);
    printf("\n%d\n",l);
    int stack[l];
    int top=-1;
    for(int i=0;i<l;i++)
    {
        if(top==-1)
        {
            stack[++top]=str[i];
        }
        else if((stack[top]=='[' && str[i]==']')||(stack[top]=='(' && str[i]==')')||(stack[top]=='{' && str[i]=='}'))
        {
            --top;
        }
        else
        {
            stack[++top]=str[i];
        }
    }
    if(top==-1)
    {
        printf("Balanced Bracket\n");
    }
    else
    {
        printf("Unbalanced Bracket");
    }
    
return 0;
}
