# include<stdio.h>
# include<stdlib.h>
# define N 5
int s1[N] ,s2[N];
int top1=-1,top2=-1;
int count=0;
void enqueue(int x)
{
    push1(x);
    count++;
}

void deque()
{
    int i,a,b;
    if(top1==-1&&top2==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(i=0;i<=count;i++)
        {
            b=pop1();
            push2(b);
        }
        a=pop2();
        printf("%d\n",a);
    }
}
void push1(int x)
{
    if(top1==N-1)
    {
        printf("stack is full");
    }
    else
    {
        top1++;
        s1[top1]=x;
    }
}
void push2(int b)
{
    if(top2==N-1)
    {
        printf("stack is full");
    }
    else
    {
        top2++;
        s2[top2]=b;
    }
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}
void display()
{
    int i;
    for(i=top1;i>=0;i--)
    {
        printf("%d\t",s1[i]);
    }
}
int main()
{
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    enqueue(6);
    display();
    deque();
    display();
    return 0;
    
}